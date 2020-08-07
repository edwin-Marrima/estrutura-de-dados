#include <stdio.h>
#include <stdlib.h>
#include "Matriz.c"


int main(void){
	Matriz *p1;
	p1=cria(4,3);
	inserir (p1,0,3,7);
	printf("minha saida eh: %d",visualizar(p1,0,3));
}
