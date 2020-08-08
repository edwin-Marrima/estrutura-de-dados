Estrutura de dados

Exercises content
1. Supor que um n�mero real seja representado por uma estrutura em C, como esta:
struct realtype
{
int left;
int right;
};
onde left e right representam os d�gitos posicionados � esquerda e � direita do ponto
decimal, respectivamnete. Se left for um inteiro negativo, o n�mero real representado
ser� negativo.
a) Escreva um cogido para inserir um n�mero real e criar uma estrutura
representado esse n�mero;
b) Escreva uma fun��o que aceite essa estrutura e retorne o n�mero real
representado por ela.
c) Escreva rotinas add, substract e multiply que aceitem duas dessas estruturas e
definam o valor de uma terceira estrutura para representar o n�mero que seja a
soma, a diferen�a e o produto, respectivamente, dos dois registros de entrada.
2. Suponha que um inteiro precise de quatro bytes, um n�mero real precise de oito
bytes e um caractere precise de um byte. Pressuponha as seguintes defini��es e
declara��es:
struct nametype
{
char first[10];
char midinit;
char last[20];
};
struct person
{
struct nametype name;
int birthday[2];
struct nametype parentes[2];
int income;
int numchildren;
char address[20];
char city[10];
char state[2];
};
struct person p[100];
se o endere�o inicial de p for 100, quais ser�o os endere�os inicias (em bytes) de cada
um dos seguintes?
a) p[10]
b) p[200].name.midinit
c) p[20].income
d) p[20].address[5]
e) p[5].parents[1].last[10]
3. Usando a representa��o de n�meros racionais apresentada abaixo, escreva um
c�digo para somar, subtrair e dividir tais n�meros.
typedef struct
{
int numerator;
int denominator;
} RATIONAL;
struct RATIONAL
{
int numerator;
int denominator;
};
4. Considere um cadastro de produtos de um stock, com as seguintes informa��es
para cada produto:
� Codigo de identifica��o do produto: representado por um valor inteiro
� Nome do produto: com at� 50 caracteres
� Quantidade dispon�vel no estoque: representado por um n�mero inteiro
� Pre�o de venda: representado por um valor real
a) Defina uma estrutura em C, denominada produto, que tenha os campos
apropriados para guardar as informa��es de um produto, conforme descrito
acima.
b) Escreva uma fun��o que receba os dados de um produto (c�digo, nome,
quantidade e pre�o) e retome o endere�o de um struct produto criado
dinamicamente e inicializado com os valores recebidos como par�metros pela
fun��o. Essa fun��o deve ter o seguinte prot�tipo:
struct produto* cria (mt cod, char* nome, mt quant, float preco);
5. Considerando as declara��es abaixo para representar o cadastro de grupo de alunos
de diferentes turmas, implemente fun��es para criar e imprimir o cadastro.
struct aluno
{
char nome[81];
char matricula[8];
char turma;
float p1;
float p2;
float p3;
};
typedef struct aluno Aluno;
Implemente uma fun��o que tenha como valor de retorno a m�dia final obtida pelos os
alunos de uma determinada turma. A nota final de cada aluno � dada pela m�dia das tr�s
provas.
float media_turma (int n, Aluno** turmas, char turma);
