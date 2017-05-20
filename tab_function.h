#include <stdio.h>

typedef struct function function;

int add_function(char * id,int addr) ;

void increase_nbParam();

void print_table_function(); 

int get_nb_params();

/*Prend le nom en paramètre et retourne l'adresse (la ligne instruction) de la fonction */
int get_function_address (char* name);

