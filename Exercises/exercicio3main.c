#include <stdio.h>
#include <stdlib.h>
#include "exercicio3.c"

int main(void){
	
	struct rotacional *p1;
	struct rotacional *p2;
	struct rotacional *p3;
	p1=inserir(2,3);
	p2=inserir(3,5);
	visualizar(p1);
	visualizar(p2);
	p3=soma(p1,p2);
	visualizar(p3);
	//printf("mmm eh %d",mmmc(12,12));
	return 0;
}
