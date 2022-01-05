#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* typedef e struct
;*/

typedef struct CadastroAluno{
	char nome[50];
	int codigo, idade;
}Aluno;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	Aluno A[3];
	for(int i=0; i<3; i++){
		printf("Digite os dados do %dº aluno\n",i+1);
		printf("\nDigite o nome: ");
		fflush(stdin);
		gets(A[i].nome);
		printf("Digite o codigo: ");
		scanf("%d",&A[i].codigo);
		printf("Digite a idade: ");
		scanf("%d",&A[i].idade);
	}
	system("cls");
	for(int i=0; i<3; i++){
		printf("\n%dº Aluno\n",i+1);
		printf("Codigo: %d Nome: %s Idade: %d\n",A[i].codigo,A[i].nome,A[i].idade);
	}
	system("Pause");
	return 0;
}

/**/
