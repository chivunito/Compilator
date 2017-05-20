%{ 
#include <stdio.h>
#include <string.h>
#include "tabsymbol.h"
#include "tabinstructions.h"
#include "tab_function.h"

int bp=0;

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}

int yywrap()
{
        return 1;
} 
  
int main()
{
        yyparse();
        printf("Fin de parse\n");
        print_table_function();
        print_table_symbol();
        print_table_instruction();

} 

%}

%union{int nb; char str[16];}

%token Tmain Tint Tif Tfor Twhile Tconst TAo Tcmp Tinf Tsup TAf TPo TPf TCo TCf Tpv Tegal Tvir Tplus Tless Tdiv Tfois Treturn Tand Tor Tinclude Tnumber Tid Tprint

%type <nb> Tnumber E Tif Twhile TPo 
%type <str> Tid Tegal 

%start Prg

%left Tvir 
%left Tegal
%left Tor Tand
%left Tcmp
%left Tinf Tsup
%left Tplus Tless
%left Tdiv Tfois
%left TPo TPf TAo TAf TCo TCf

%%

Prg : 
	| Fct Prg ;
	
Fct :  Tint Tmain{set_PC();} TPo Args TPf BodyMain   /*setPC permet d'initialiser le pointeur d'instruction au bon endroit*/
	| Tint Tid 
		{
			int adr = get_sommet_instr();
			add_function($2,adr);
		} 
	TPo Args 
		{
			add_symbol("ret",1);/*Laisser de la place pour l'adresse de retour*/
		}
	TPf BodyFct
		{
			decrease_depth();
			jump_fin_fct(get_nb_params());/*instruction(JMP,FFF,-1,-1);*/
			flush_tab_symbol();  /*Une fois parsée, on peut flush la tab des symboles */ 
		}
	
Args : 
	| Arg ListeArgs ;
	
Arg : Tint Tid 
		{
			add_arg($2,1);
			increase_nbParam();
		};
		
ListeArgs : 
	| Tvir Arg ListeArgs ;
BodyMain : TAo Decls Instrs Return TAf 
			{
				jump_fin_main();
			}
	
BodyFct : TAo{increase_depth();} Decls Instrs Return TAf{decrease_depth();} 
			

Return : Treturn E Tpv ;

Instrs : 
	| Instr Instrs ;
	
If :  Tif TPo E TPf 
			{
				printf("> IF : \n" ); $1=jump_if($3); pull_symbol(); increase_depth();
			} 
		Body 
			{
				maj_if_jmpc($1);
			}; 

While : Twhile
				{
					$1 = get_sommet_instr();
				}
			TPo E TPf
				{
					$3=jump_if($4);
					pull_symbol();
					increase_depth();
				}
			Body
				{
					maj_while_jmpc($3,$1);
				}; 

Invoc : Tprint TPo Tid TPf ;
			| Tid TPo 
				{
					$2=get_tabsymbol_size(); /* Sommet de la table des symboles avant d'y ajouter les variables temporaires associées au paramètres de la fonction invoqué */
				} 
			Params TPf
				{
					function_call($1,$2);
				}; 
				
				
Aff : Tid Tegal E 
			{ 
				affectation($1,$3); 
			} ; 
			
			
Decl1 : Tid 
			{ 
				add_symbol($1,1);
			}
	| Tid 
			{
				add_symbol($1,1);
			}
	Tegal E 
			{
				affectation($1,$4);
			};
			
			
Decls : 
	|Tconst DeclList Tpv
	| Tint DeclList Tpv;

DeclList : Decl1
	| Decl1 Tvir DeclList;

Instr : If
	| While
	| For
	| Invoc  Tpv
	| Aff Tpv;
/*Les valeurs de E sont les indices dans la table des symboles */
E : Tnumber 
		{ //Tnumber => VarTemp
			instruction(AFC,r0,$1,-1);
			$$=add_var_temp(1);
			instruction(STORE,$$,r0,-1);
		}
	| Tid
		{ // Tid => VarTemp : il faut check qu'elle soit initialized
			if (initialized($1)==1) {
			 printf(" E : Tid : Addresse du symbole = %d \n" ,get_symbol_address($1));
			instruction(LOAD,r0,get_symbol_address($1),0);
			$$=add_var_temp(1);
			instruction(STORE,$$,r0,-1); 
			}
			else{
				printf("Variable %s is not initialized \n", $1);
			}
		}
	| E Tplus E 
		{
			add($1,$3);
			pull_symbol();  
			$$=$1; 
		}
	| E Tless E 
		{
			sou($1,$3);
			pull_symbol();  
			$$=$1; 
		} 
	| E Tfois E
		{
			mul($1,$3);
			pull_symbol();  
			$$=$1; 
		}
	| E Tdiv E 
		{
			div($1,$3);
			pull_symbol();  
			$$=$1; 
		}
	| E Tcmp E
		{
			equ($1,$3);
			pull_symbol();  
			$$=$1; 
		}
	| E Tinf E
	| E Tsup E
	| E Tand E
	| E Tor E
	| TPo E TPf
	| Invoc;
Params : 
	| E ParamNext;
ParamNext : 
	| Tvir E ParamNext;
For : Tfor TPo Decl1 Tpv E Tpv Instr TPf Body;
%%
