#include <stdio.h>
#include <stdlib.h>
#include "Texto.c"

int main(void){
	Texto *t1,*t2;
	t1=criar();
    int i=0; 
    inserir(t1,'E');
    inserir(t1,'D');
    inserir(t1,'W');
    inserir(t1,'I');
	inserir(t1,'B');  
	inserir(t1,' ');
	inserir(t1,'M'); 
	inserir(t1,'A');  
	inserir(t1,'R');
	inserir(t1,'R');
	inserir(t1,'T'); /*registo nao sera aceite devido ao excessivo numero de resgistos na fila..*/  

	editar(t1,4,'N');
	
int elemtos =  tamanho(t1);
	printf("%d ",elemtos);

for	(i=0;i<elemtos;i++){
	printf("%c",ver(t1,i));
}
	
	return 0 ;
}
