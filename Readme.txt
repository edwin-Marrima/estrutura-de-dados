Estrutura de dados

Exercises content
1. Supor que um número real seja representado por uma estrutura em C, como esta:
struct realtype
{
int left;
int right;
};
onde left e right representam os dígitos posicionados à esquerda e à direita do ponto
decimal, respectivamnete. Se left for um inteiro negativo, o número real representado
será negativo.
a) Escreva um cogido para inserir um número real e criar uma estrutura
representado esse número;
b) Escreva uma função que aceite essa estrutura e retorne o número real
representado por ela.
c) Escreva rotinas add, substract e multiply que aceitem duas dessas estruturas e
definam o valor de uma terceira estrutura para representar o número que seja a
soma, a diferença e o produto, respectivamente, dos dois registros de entrada.
2. Suponha que um inteiro precise de quatro bytes, um número real precise de oito
bytes e um caractere precise de um byte. Pressuponha as seguintes definições e
declarações:
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
se o endereço inicial de p for 100, quais serão os endereços inicias (em bytes) de cada
um dos seguintes?
a) p[10]
b) p[200].name.midinit
c) p[20].income
d) p[20].address[5]
e) p[5].parents[1].last[10]
3. Usando a representação de números racionais apresentada abaixo, escreva um
código para somar, subtrair e dividir tais números.
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
4. Considere um cadastro de produtos de um stock, com as seguintes informações
para cada produto:
• Codigo de identificação do produto: representado por um valor inteiro
• Nome do produto: com até 50 caracteres
• Quantidade disponível no estoque: representado por um número inteiro
• Preço de venda: representado por um valor real
a) Defina uma estrutura em C, denominada produto, que tenha os campos
apropriados para guardar as informações de um produto, conforme descrito
acima.
b) Escreva uma função que receba os dados de um produto (código, nome,
quantidade e preço) e retome o endereço de um struct produto criado
dinamicamente e inicializado com os valores recebidos como parâmetros pela
função. Essa função deve ter o seguinte protótipo:
struct produto* cria (mt cod, char* nome, mt quant, float preco);
5. Considerando as declarações abaixo para representar o cadastro de grupo de alunos
de diferentes turmas, implemente funções para criar e imprimir o cadastro.
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
Implemente uma função que tenha como valor de retorno a média final obtida pelos os
alunos de uma determinada turma. A nota final de cada aluno é dada pela média das três
provas.
float media_turma (int n, Aluno** turmas, char turma);
