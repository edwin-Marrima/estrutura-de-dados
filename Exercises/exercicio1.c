#include <stdio.h>
#include <stdlib.h>
#include "exercicio1.h"


struct realtype{
	int left;
	int right;
};

Realtype* inserir(int left, int right){
	Realtype * p = (Realtype*)malloc(sizeof(Realtype));
	p->left = left;
	p->right = right;
	return p ; 
}
float visualizar(Realtype* p){
	return  (p->left)+(decimal(p->left,p->right));
}

Realtype* somatorio(Realtype* p,Realtype p2){
     double x,fr, intpart;
    // x = (p->left + p2->left)+(decimal(p->left,p->right)+decimal(p2->left,p2->right));
     
}
float decimal(int nrr,int nr){
float x=nr;	
			
float c=0.1;
	while(x>=1){
		x=x*c;
	
		}
	if(nrr<0){
		x=x*-1;
		
	}
return x;	
}




