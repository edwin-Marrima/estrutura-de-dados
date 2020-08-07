#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"


struct matriz{
	int col;
	int linha;
	int* valor;
};

Matriz* cria(int m ,int n ){
	Matriz* p = (Matriz*)malloc(sizeof(Matriz));
	
	p->col = n;
	p->linha = m;
	
	p->valor = (int*)malloc(m*n*sizeof(int));
	
	return p; 
}
void inserir (Matriz*p, int linha,int coluna,int elemento){
	int k =0;
  k=linha*p->col+coluna;
  printf("saida eh: %d",k);
   p->valor[k]=elemento;
   
}
int visualizar(Matriz *mat,int i,int j){
	int k=0;
  k=i*mat->col+j;
   return mat->valor[k]	;
}
