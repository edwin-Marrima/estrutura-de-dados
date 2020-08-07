#include <stdio.h>
#include <stdlib.h>
#include "Vetor.h"
#define TAM 100

struct vetor{
	int* valor;
	int ultimo;
	int primeiro;
	
};
Vetor* cria(){
	Vetor* p = (Vetor*)malloc(sizeof(Vetor));
	p->ultimo=0;
	p->primeiro=0;
	p->valor=(int*)malloc(TAM*sizeof(int));
	return p;
}
int verificar_tam(Vetor* p){
	if(p->ultimo>=TAM){
		return 0;
	}else{
		return 1;
	}
	
}
void inserir(Vetor* p, int valor){
	if(verificar_tam(p)==1){
      p->valor[p->ultimo] =  valor;
      p->ultimo++;
	  } 
	  else{
	  	printf("Tamanho excedido...!!!");
	  } 	
}
void tirar_elemento(Vetor* p){
	if(p->primeiro<p->ultimo-1){
	p->primeiro++;
}
}
int ultimo(Vetor* p){
	return p->valor[((p->ultimo)-1)];
}
int primeiro(Vetor* p){
	return p->valor[p->primeiro];
}
