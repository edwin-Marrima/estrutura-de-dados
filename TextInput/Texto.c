#include <stdio.h>
#include <stdlib.h>
#include "Texto.h"

struct texto{
	int total;
	int primeiro,ultimo;
	char elemento;
	
};   
Texto* criar(){
	Texto* p = (Texto*)malloc(TAM*sizeof(Texto));
    p->ultimo=0;
    p->primeiro=0;
	return p;
	
}
//total incrementa a cada insercao feita na lista
//casp seja igual ao total permitido nao se podem fazer mais insercoes
void inserir(Texto* p,char elem){
      if(p->ultimo<10){
         (p+(p->ultimo))->elemento =elem;   
		 p->ultimo=p->ultimo+1;
	
	  }
}

char ver(Texto* p,int posicao){
		    char x  =(p+posicao)->elemento;
			return (x);
}
void editar(Texto* p,int posicao,char x){
			 if(posicao<=TAM){
			 (p+posicao)->elemento=x;	
			 }	
}
int tamanho(Texto* p){
	return (p->ultimo);
}

