#include <stdlib.h>
#include <stdio.h>
#include "exercicio5.h"
#include <string.h>

struct aluno {
char nome[81];
char matricula[8];
char turma;
float p1;
float p2;
float p3;
};

Aluno* cadastrar (char nome[81],char matriculaa[8],char turma,float p1,float p2,float p3){
						Aluno* p = (Aluno*)malloc(sizeof(Aluno));
						strcpy(p->matricula, matriculaa);
						strcpy(p->nome, nome);    
						p->p1 = p1;
						p->p2 = p2;
						p->p3 = p3;
					    p->turma = turma;
	
	return p;
}
void imprimir(Aluno* p){
	printf("%s \n %c \n %f   %f     %f",p->nome,p->turma,p->p1,p->p2,p->p3);
}

float media_turma (int n, Aluno** turmas, char turma){
    int i=0;
    int j=0;
    float notas=0;
	for(i=0;i<=n;i++){
		if(turmas[i]->turma==turma){
			j++;
		notas = notas + ((turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3)/3);
	}}
	
	return notas/j;	
}
