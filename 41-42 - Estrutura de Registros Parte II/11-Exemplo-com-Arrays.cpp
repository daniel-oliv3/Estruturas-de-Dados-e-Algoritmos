#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

/* Exemplo com Arrays
	Passagem de uma Estrutura como Parâmetro por Referência
;*/

typedef struct CadastroAluno{
	char nome[30];
	char turma[3];
	char nota1[3];
}aluno;

void impressao(aluno *a){
	int i;
	for(i=0; i<TAM; i++){
		printf("\nNome: %s\n",a[i].nome);
		printf("Nota %d: %s\n",i+1,a[i].nota1);
	}
}

void cadastroAluno(aluno *a){
	int i;
	for(i=0; i<TAM; i++){
	printf("Nome: ");
	gets(a[i].nome);
	printf("Nota 1: ");
	gets(a[i].nota1);
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	aluno alunos[TAM], *p;
	p=&alunos[0];
	cadastroAluno(p);
	impressao(alunos);	
	printf("\n");
	system("Pause");
	return 0;
}

/**/
