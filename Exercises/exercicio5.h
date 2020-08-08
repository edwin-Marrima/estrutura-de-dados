typedef struct aluno Aluno;

/*cadastro de aluno*/
Aluno* cadastrar (char nome[81],char matriculaa[8],char turma,float p1,float p2,float p3);
/*imprimir*/
void imprimir(Aluno* p);
/*media da turma*/
float media_turma (int n, Aluno** turmas, char turma);
