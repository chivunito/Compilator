#include <stdio.h>
#include <string.h>

#define MAX_SYMBOLES 20

typedef struct {
	char name[10];  /* Nom du symbole */
	int address;
	int size; /* taille des tableaux, nb de param des fct */
	int depth; 
	int initialized; 
} symbole;

symbole tab[MAX_SYMBOLES];
int sommet=0;
int depth=0;

//_______________Printer__________________//
void print_symbol (symbole s) ;
void print_table_symbol();

int pull_symbol(){
	return --sommet;
}
int pull_args(int nb){
	sommet=sommet-nb;
	return sommet;
}

void increase_depth() {
	depth++;
}
void decrease_depth() {
	depth--;
}
/*
Il faut chercher les symboles à la bonne profondeur car si on a une autre déclaration
*/
int exist_symbol (char* name) {
	int i;
	for (i = 0; i < sommet; ++i)
	{
		if (!strcmp(tab[i].name,name)){
			return 1;
		}
	}
	return 0;
}


void flush_tab_symbol(){
	sommet = 0;
}

int get_tabsymbol_size(){
	return sommet;
}

int get_symbol_address (char* name) {
	int i;
	for (i = 0; i < sommet; ++i)
	{
		if (!strcmp(tab[i].name,name)) {
			return tab[i].address;
		}
	}
	return -1;
}

int initialize_symbol(char *name){
	int i;
	for (i = 0; i < sommet; ++i)
	{
		if (!strcmp(tab[i].name,name)) {
			tab[i].initialized=1;
			return tab[i].address;
		}
	}
	return -1;
}

int initialized(char *name){
	int i;
	for (i = 0; i <= sommet; ++i)
	{
		if (!strcmp(tab[i].name,name)) {
			return tab[i].initialized;
		}
	}
	return -1;
}

void destroy_context(){
	int i = sommet-1;
	//printf("Avant destruction du contexte");
	////print_table_symbol();
	while(tab[i].depth == depth){		
		i--;
	}
	sommet = i+1;
	//printf("Après destruction du contexte");
	//print_table_symbol();
}

int add_symbol(char *name,int size){
	if (!exist_symbol(name)){
		strcpy(tab[sommet].name,name);
	 	tab[sommet].depth = depth;
	 	tab[sommet].size = size;
	 	tab[sommet].address = sommet; 
	 	printf(">NewSymbol : ");
	 	print_symbol(tab[sommet]);
	 		 	sommet++;
	 }
	 else{
	 	printf(">SymbolAlreadyDeclared : %s\n",name);
	 }
	 return (sommet-1);
}

int add_arg(char *name,int size){  // la seule difference avec add Symbol c'est que celui-ci est initialisé
	if (!exist_symbol(name)){
		strcpy(tab[sommet].name,name);
	 	tab[sommet].depth = depth;
	 	tab[sommet].size = size;
	 	tab[sommet].address = sommet;
	 	tab[sommet].initialized = 1;
	 	printf(">newArg : ");
	 	print_symbol(tab[sommet]);
	 		 	sommet++;
	 }
	 else{
	 	printf(">SymbolAlreadyDeclared : %s\n",name);
	 }
	 return (sommet-1);
}

int add_var_temp(int size){
	strcpy(tab[sommet].name,"vartemp");
	tab[sommet].depth = depth;
	tab[sommet].size = size;
	tab[sommet].address = sommet; 
	printf(">New vartemp : ");
	print_symbol(tab[sommet]);
	sommet++;
	return(sommet-1);
}


//_________________________Printage_________________________________//

void print_symbol (symbole s) {
	printf("[id:%s | Depth:%d | address:%d |init : %d] \n",s.name,s.depth, s.address, s.initialized);
}

void print_table_symbol() {
	printf("Table des symboles (sommet = %d): \n", sommet);
	int i;
	for (i=0;i<sommet;i++) {
		print_symbol(tab[i]);
	}
}
/*
int main(int argc, char const *argv[])
{
	int i = exist_symbol("sas");
	printf(" existe : %d\n", i);

	
	add_symbol("pute",1,2);
	i = exist_symbol("sd");
	printf(" existe : %d\n", i);
	add_symbol("sd",1,2);
	add_symbol("sas",1,2);
	i = exist_symbol("sas");
	printf(" existe : %d\n", i);

	return 0;
}
*/
