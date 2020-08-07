#include <stdio.h>
#include <stdlib.h>
#include "Vetor.c"

int main(void){
	
	
	Vetor *p1;
	p1= cria();
	inserir(p1,11);
	inserir(p1,14);
	inserir(p1,16);
	inserir(p1,18);
	tirar_elemento(p1);
	tirar_elemento(p1);
	tirar_elemento(p1);

	
	int a = ultimo( p1);
	int b = primeiro(p1);
	printf("O ultimo elemento eh: %d e  o primeiro eh: %d",a,b);
	
	
	return 0;
}
