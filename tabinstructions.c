#include <stdio.h>
#include "tabsymbol.h"
#include "tabinstructions.h"
#include "tab_function.h"

int PC=0;

char codeinstruc[][10]={"bug","ADD  ","MUL  ","SOU  ","DIV  ","COP  ","AFC  ","LOAD ","STORE","EQU","INF","INFE","SUP","SUPE","JMP  ","JMPC"};

int instructions[MAX_INSTRUCTIONS][4];
int sommettab=0;

void print_table_instruction();

int get_sommet_instr(){
	return sommettab;	
}

int set_PC(){
	PC=get_sommet_instr();
}

int instruction(int instruction, int A,int B, int C) {
	instructions[sommettab][0]=instruction;
	instructions[sommettab][1]=A;
	instructions[sommettab][2]=B;
	instructions[sommettab][3]=C;
	sommettab++;
	return sommettab-1;
} 

int jump_if(int E) {
	instruction(LOAD,r0,E,-1);
	int addr_instruc = instruction(JMPC,-2,r0,-1);
	return addr_instruc;
}

void jump_fin_fct(int adress_ret){
	instruction(LOAD,r1,adress_ret,-1);
	instruction(JMP,r1,-1,-1);
}

void jump_fin_main(int adress_ret){
	instruction(AFC,r0,-3000,-1);
	instruction(JMP,r0,-1,-1);
}


void function_call( char *name,int ebp){  // ebp, nombre de parametre de la fonction
	int adr_function = get_function_address ( name); /* Adresse de la fonction dans la table des instructions */
	int adr_retour = get_tabsymbol_size();  // l'adresse de retour se situe en tête de tab des symboles ( juste après les paramètres passés )
	int instr2modify = instruction(AFC,r0,-1000,-1);
	instruction(STORE,adr_retour,r0,-1);
	instruction(AFC,r1,ebp,-100);
	instruction(ADD,r15,r15,r1);
	instruction(AFC,r2,adr_function,-1);
	instruction(JMP,r2,-1,-1);
	int ret_addr =instruction(AFC,r2,ebp,-1);
	instruction(SOU,r15,r15,r2);
	instructions[instr2modify][2] = ret_addr;
	
}

int maj_if_jmpc(int instruction2modify){
	int sommet_actuel = sommettab;
	instructions[instruction2modify][1] = sommet_actuel;
}

int maj_while_jmpc(int instruction2modify,int instructionJump){
	instruction(AFC,r0,instructionJump,0);
	instruction(JMP,r0,0,0);
	maj_if_jmpc(instruction2modify);
}

/* Pour A=E, $A = adresse de A, $E = adresse de E
*
* realise une affectation,
*/
void affectation(char* A,int E){ 
	instruction(LOAD,r0, E,-1);
	int	addr=get_symbol_address(A);
		printf("adresse de %c, %d ",A,addr);
	if (addr==-1) {
		printf("Variable : %s  pas déclarée", A);
	}
	instruction(STORE,addr,r0,-1);
	pull_symbol(); 
}

void affectationDeclaration(char* A,int E){ 
	instruction(LOAD,r0, E,-1);
	int	addr=initialize_symbol(A);
	instruction(STORE,addr,r0,-1);
	pull_symbol(); 
}

//____________________________Les instructions__________________________________// 
/*Nous ne sommes pas obligés de passer les adresses des variables temporaires, en effet, ceux sont les deux dernières en têtes de pile*/
//Addition
void add(int A, int B) {
		instruction(LOAD,r0,A,0);  // LOAD r0 $1
		instruction(LOAD,r1,B,0);  // LOAD r1 $3
		instruction(ADD,r0,r0,r1);  // ADD  r0 r1 
		instruction(STORE,A,r0,0); // STORE $1 r0    [$1] <- r0
}
//Soustraction
void sou(int A, int B) {
		instruction(LOAD,r0,A,0);  // LOAD r0 $1
		instruction(LOAD,r1,B,0);  // LOAD r1 $3
		instruction(SOU,r0,r0,r1);  // SUB  r0 r1 
		instruction(STORE,A,r0,0); // STORE $1 r0    [$1] <- r0
}

void mul(int A, int B) {
		instruction(LOAD,r0,A,0);  // LOAD r0 $1
		instruction(LOAD,r1,B,0);  // LOAD r1 $3
		instruction(MUL,r0,r0,r1);  // MUL  r0 r1 
		instruction(STORE,A,r0,0); // STORE $1 r0    [$1] <- r0
}

 void div(int A, int B) {
 		instruction(LOAD,r0,A,0);  // LOAD r0 $1
 		instruction(LOAD,r1,B,0);  // LOAD r1 $3
 		instruction(DIV,r0,r0,r1);  // DIV  r0 r1 
 		instruction(STORE,A,r0,0); // STORE $1 r0    [$1] <- r0
 } 

 void equ(int A, int B) {
 		instruction(LOAD,r0,A,0);  // LOAD r0 $1
 		instruction(LOAD,r1,B,0);  // LOAD r1 $3
 		instruction(EQU,r0,r0,r1);  // EQU  r0 r1 
 		instruction(STORE,A,r0,0); // STORE $1 r0    [$1] <- r0
 }

/*_________________ PRINTERS __________________________________*/
void print_instruction(int tab[4]){
 			printf("[0x%s|%d|%d|%d]\n",codeinstruc[tab[0]],tab[1],tab[2],tab[3]);
 	}
void print_file_instruction(FILE * file,int tab[4]){
 			fprintf(file," %d %d %d %d \n",tab[0],tab[1],tab[2],tab[3]);
 	}

int print_file();

void print_table_instruction(){
	printf("Table des instructions : \n");
	int i;
	for (i=0;i<sommettab;i++) {
		printf("ligne %d",i);
		print_instruction(instructions[i]);
	}
	print_file();
}

int print_file(){
	FILE * file;
	if ((file = fopen("test.txt","w+"))==0) {
		printf("erreur à l'ouverture du file");
	}

	int i=0;
	fprintf(file,"%d\n",PC);
	for (i=0;i<sommettab;i++) {
		fprintf(file,"%d :",i);
		print_file_instruction(file,instructions[i]);
	}
	
	if ((fclose(file)!=0)){
		printf("erreur à la fermeture du file");
	}
	return 0;
}
