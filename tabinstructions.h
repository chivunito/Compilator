#include <stdio.h>
#define MAX_INSTRUCTIONS 4096
#define r0 0
#define r1 1
#define r2 2
#define r5 5
#define r15 15
#define ADD 1
#define MUL 2
#define SOU 3
#define DIV 4
#define COP 5
#define AFC 6
#define LOAD 7 
#define STORE 8
#define EQU 9 
#define INF 10
#define INFE 11
#define SUP 12
#define SUPE 13 
#define JMPR 14
#define JMPC 15

int set_PC();
//Addition
int instruction(int instruction, int A,int B, int C) ;

void affectation(char* $A,int $E);

void affectationDeclaration(char* A,int E); 

int get_sommet_instr();

void jump_fin_fct(int adress_ret);

void jump_fin_main();

void function_call( char *name,int ebp);


/*___________________*/
void add(int A, int B) ;
//Soustraction
void sou(int A, int B) ;

void mul(int A, int B) ;

void equ(int A, int B);

int jump_if(int E) ;

int maj_if_jmpc(int instruction2modify);

int maj_while_jmpc(int instruction2modify,int instructionJump);

//_______________Printer__________________//

void print_table_instruction();

void print_instruction(int tab[4]);
