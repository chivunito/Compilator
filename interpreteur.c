#include <stdio.h>
#include "tabinstructions.h"
#include "interpreteur.h"

int instructions[MAX_INSTRUCTIONS][4];
int nb_instructions=0;
int registers[16]; // 16 registres
int memory[MEMORY_SIZE]; // memoire
int PC=0;

int run () {
	char carlu;
	while(PC!=-3000){
		scanf("%c",&carlu);
		switch(carlu){
			case 'n' : 
			execute();
			break;
			case 'r' : 
			print_register();
			break;
			case 'm' : 
			print_memory();
			break;
			case 'f' :
			while(PC!=-3000){ 
			execute();
			}
			break;
		}
	}
}
int main ( int argc, char **argv ) {
	printf("Bienvenue dans l'interpreteur\n");
	printf(" n : next, m : dump memory, r : print registers, f : finish program \n");
	readFile();
	run();

	//run();
	print_memory();
	print_register();
	//print_table(instructions,nb_instructions);
	return 0; // Indicates that everything went well.
}



int execute(){
	printf("%2d",PC);
	print_instruction(instructions[PC]);
	int OP=instructions[PC][0],A=instructions[PC][1],B=instructions[PC][2],C=instructions[PC][3];

	if(OP==ADD){  //ADD
		registers[A]=registers[B]+registers[C];
		PC++;
	}
	else if (OP==MUL) {  //MULTIPLICATION
		registers[A]=registers[B]*registers[C];
		PC++;
	}
	else if (OP==SOU) {  //SOUSTRACTION
		registers[A]=registers[B]-registers[C];
		PC++;
	}
	else if (OP==DIV) {  //DIVISION
		registers[A]=registers[B]/registers[C];
		PC++;
	}
	else if (OP==COP) {  //COPIE
		registers[A]=registers[B];
		PC++;
	}
	else if(OP==AFC){
		registers[A]=B;
		PC++;
	}
	else if (OP==LOAD) {  //LOAD avec le decalage ebp
		registers[A]=memory[B+registers[15]];
		PC++;
	}
	else if(OP==STORE){ //STORE avec le decalage ebp
		memory[A+registers[15]]=registers[B];
		PC++;
	}
	else if(OP==JMP){ //STORE
		PC = registers[A];
	}
	else if(OP==JMPC){ //STORE
		if(registers[B]==0){
			PC=A;
		}
		else{
			PC++;
		}
	}
}

int readFile(){
	FILE * file;
	char  line[40];
	
	if ((file = fopen("test.txt","r"))==0) {
		printf("erreur à l'ouverture du file");
	}
	fgets(line,sizeof(line),file);
	sscanf(line,"%d",&PC);
	 int NB;
	 while (fgets(line, sizeof(line), file)) {
        /* note that fgets don't strip the terminating \n, checking its
           presence would allow to handle lines longer that sizeof(line) */
        //printf("%s", line); 
        int OP,A,B,C;
        sscanf(line,"%d : %d %d %d %d",&NB , &OP, &A, &B, &C);
        //printf("%d : %d %d %d %d\n",NB, OP, A,B,C);
        instructions[NB][0]=OP;
        instructions[NB][1]=A;
        instructions[NB][2]=B;
        instructions[NB][3]=C;
    }
    nb_instructions = NB +1;
	if ((fclose(file)!=0)){
		printf("erreur à la fermeture du file");
	}
	return 0;
}


void print_instruction(int tab[4]){
 			printf("[0x%s|%d|%d|%d]\n",codeinstruc[tab[0]],tab[1],tab[2],tab[3]);
 	}

void print_table(int instructions[MAX_INSTRUCTIONS][4],int nb_instructions){
	printf("Table des instructions : \n");
	int i;
	for (i=0;i<nb_instructions;i++) {
		printf("ligne %d",i);
		print_instruction(instructions[i]);
	}
}

void print_register(){
	int i;
	printf("\n/Registers**********************************************************************************************************/\n");
	for (i=0;i<16;i++) {
		printf("r%d:%d | ",i,registers[i]);
	}
	printf("\n/*******************************************************************************************************************/\n");
}


void print_memory(){
	int i;
	printf("\n/Memory***/\n");
	for (i=0;i<MEMORY_SIZE;i++) {
		printf("@%2d : %5d\n",i,memory[i]);
	}
	printf("/*********/\n");
}