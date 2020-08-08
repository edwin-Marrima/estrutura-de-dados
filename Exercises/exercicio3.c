#include <stdio.h>
#include <stdlib.h>


struct rotacional{
	int numerador;
	int demoninador;
};
typedef struct rotacional rot;

rot* inserir(int nu,int de){
rot* p = (rot*)malloc(sizeof(rot));	
if(de!=0){
	p->demoninador=de;
	p->numerador=nu;
}else {
	printf("IMpossivel preencher");
}
return p;
}

void visualizar(rot* p){
	printf("\n Numerador: %d",p->numerador);
	printf("\n Denominador: %d",p->demoninador);
}

int mmc(int nr_1,int nr_2){
	int maior;
int menor;
	if(nr_1>nr_2){
		maior = nr_1;
		 menor=nr_2;
	}else if(nr_2>nr_1){
		maior = nr_2;
		menor=nr_1;
	}
	else if(nr_2==nr_1){
		maior=nr_2;
		menor=nr_2;
	}
	int temp = maior;
	while(temp%menor!=0){
		temp+=maior;
	}
	return temp;
}
rot* soma(rot* p2,rot* p1){
   	rot* p = (rot*)malloc(sizeof(rot));	
   	int mmcc=mmc(p2->demoninador,p1->demoninador);
   	p->demoninador =mmcc;
   	p->numerador = ((mmcc/p2->demoninador)*p2->numerador)+((mmcc/p1->demoninador)*p1->numerador);
   	return p;
} 




