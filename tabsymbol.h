#include <stdio.h>
#define MAX_SYMBOLES 20


typedef struct symbole symbole;

void flush_tab_symbol();

/*Donne le nombre de symbole dans la table des symboles ( = sommet ) car indéxé à partir de 0  */
int get_tabsymbol_size(); 

/*Enléve le dernier symbole de la tables des symboles*/
int pull_symbol();

int pull_args(int nb);

void increase_depth() ;

void decrease_depth() ;

int exist_symbol (char* name); /* returns 1 if the symbol already exists */

int get_symbol_address (char* name) ; /* returns the adress of the symbol */

int initialize_symbol(char *name); /*return the adress of the symbol*/

int initialized(char *name);/*return 1 if the symbol is initialized , 0 if not, -1 if symbol is not declared*/

void destroy_context();

int add_arg(char *name,int size);
int add_symbol(char *name, int size);
int add_var_temp(int size);



//_______________Printer__________________//

void print_symbol (symbole s) ;
void print_table_symbol();