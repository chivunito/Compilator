#SRC= tabsymbol.c
#SRC va contenir les différents fichiers
#OBJ=$(SRC:.c =.o)
all:compilator 
y.pdf : y.dot	dot -Tpdf y.dot > y.pdf
y.tab.c y.tab.h ydot y.output:source.yacc
	yacc -dvg source.yacc
lex.yy.c:source.lex y.tab.h
	flex source.lex
compilator: y.tab.c lex.yy.c tabsymbol.c tabinstructions.c  tab_function.c
		gcc y.tab.c lex.yy.c tabsymbol.c tabinstructions.c tab_function.c -ll -o compilator
test:compilator
	./compilator<test.c
