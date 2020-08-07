
#define TEXTO_H_INCLUDED


typedef struct matriz Matriz;

/*Criacao da matriz*/
Matriz* cria(int m,int n );
/*insercao na matriz*/
void inserir (Matriz*p, int linha,int coluna,int elemento);

int visualizar(Matriz *mat,int i,int j);
