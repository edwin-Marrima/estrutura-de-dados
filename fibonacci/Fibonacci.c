#include <stdio.h>
#include <stdlib.h>
#include "Fibonacci.h"

struct  fibonacci{
	int primeiro;
	int ultimo;
	int tamanho;
	int* valor;
};

Fibonacci* cria(int tam){
	Fibonacci* p = (Fibonacci*)malloc(sizeof(Fibonacci));
	p->tamanho = tam;
	
	p->valor = (int*)malloc(tam*sizeof(int));
	return p; 
}
void inserir(Fibonacci* p){
	int i=0;
	while(i<=p->tamanho){
		
	}
}
