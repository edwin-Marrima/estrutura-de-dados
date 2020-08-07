#define TEXTO_H_INCLUDED

#define TAM 10
typedef struct texto Texto;

Texto * criar();
/*tem a funcoo de inserir os elementos na lista...*/
void inserir(Texto* p,char elem);
/*retona o caracter que se encontra em determinada posicao.........*/

char ver(Texto* p,int posicao);
/*devolve o numero de registos feitos ate entao na lista...*/ 
int tamanho(Texto* p);
/*edita a lista*/
void editar(Texto* p,int posicao,char x);
