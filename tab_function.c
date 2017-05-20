#include <stdio.h>
#include <string.h>
#include "tabsymbol.h"
#define MAXFCT 10


typedef struct {
	char name[20];  /* Nom du symbole */
	int address;
	int nb_params;
} function;

function fonctions[MAXFCT]; /*Premiere colonne contient les ids des fonctions et la deuxieme l'adresse*/
int sommettabF=0;

int add_function(char * id,int addr) {  //Return address of the function
	strcpy(fonctions[sommettabF].name,id);
	fonctions[sommettabF].address=addr;
	fonctions[sommettabF].nb_params=0;
	sommettabF++;
	return sommettabF-1;
}


int get_function_address (char* name) {
	int i;
	for (i = 0; i < sommettabF; ++i)
	{
		if (!strcmp(fonctions[i].name,name)) {
			return fonctions[i].address;
		}
	}
	return -1;
}

/* Incremente le nb de parametre de la fonction en cours de parse
*Pas besoin d'avoir le nom de la fonction, car on est en train de la parser, 
*Elle est donc en sommet de la table des fonctions
*/
void increase_nbParam(){  
	fonctions[sommettabF - 1].nb_params+=1;
}
// Donne le nb de parametre de la fonction en cours de parse
int get_nb_params(){
	return fonctions[sommettabF-1].nb_params;
}

int get_params(char* name){
	int i;
	for (i = 0; i < sommettabF; ++i)
	{
		if (!strcmp(fonctions[i].name,name)) {
			return fonctions[i].nb_params;
		}
	}
}


void print_function(function f){
 			printf(">FunctionID: %s, addr_instruction : %d, nb_params %d \n", f.name, f.address,f.nb_params);
 }

void print_table_function(){
	printf("Table des fonctions : \n");
	int i;
	for (i=0;i<sommettabF;i++) {
 		print_function(fonctions[i]);
	}
}




/*

void print_fct(int tab[2]){
 	printf("[0x%s|%d|%d|%d]\n",codeinstruc[tab[0]],tab[1],tab[2],tab[3]);
}
	

void print_table(){
	printf("Table des fonctions : \n");
	int i;
	for (i=0;i<sommettab;i++) {
		printf("ligne %d",i);
		print_fct(fonctions[i]);
	}
}

*/
