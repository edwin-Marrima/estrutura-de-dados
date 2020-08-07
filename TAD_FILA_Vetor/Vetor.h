#define TEXTO_H_INCLUDED


typedef struct vetor Vetor;



Vetor* cria();
void inserir(Vetor* p, int valor);
/*exibir se o tamnho definido excedo o definido*/
int verificar_tam(Vetor* p);
/*ultimo elemnto*/
int ultimo(Vetor* p);
/*primeiro*/
int primeiro(Vetor* p);
/*retirar elemento da fila*/
void tirar_elemento(Vetor* p);




