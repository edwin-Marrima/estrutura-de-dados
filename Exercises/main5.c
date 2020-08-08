#include <stdio.h>
#include <stdlib.h>
#include "exercicio5.c"

int main(void){
	
	Aluno *p1[20];
	p1[0]= cadastrar ("Edy","AAAA",'A',14,11,17); 
	p1[1]= cadastrar ("Maria","CCC",'A',14,11,3);
	p1[2]= cadastrar ("Lucas","AAAA",'A',14,1,17);
	p1[3]= cadastrar ("Juliana","AAAA",'B',10,20,10);   
	
	imprimir(p1[0]);
	
	Aluno **ponteiro;
	ponteiro = &p1[0];
	
	float xx= media_turma(3,ponteiro,'A');
	printf("\n A media da turma foi %f",xx);
	
	return 0 ;
}


