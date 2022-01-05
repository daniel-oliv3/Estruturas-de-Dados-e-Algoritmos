#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 5

/* Exercício
Criar uma estrutura representando um aluno de
uma disciplina. Essa estrutura deve conter o
número de matrícula do aluno, seu nome e as notas
de três provas. Agora, escreva um programa que
leia os dados de cinco alunos e os armazene nessa
estrutura. Em seguida, exibir o nome e as notas do
aluno que possui a maior média geral dentre os
cinco alunos:
Estrutura;*/

struct mat{
	int num_matrc;
	char nome[50];
	float n1, n2, n3;
}vet[tam];

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct mat vet[tam];
	for(int i=0; i<tam; i++){
		printf("\nNúmero da Matrícula: ");
		scanf("%d",&vet[i].num_matrc);
		printf("Nome do %dº Aluno: ",i+1);
		fflush(stdin);
		gets(vet[i].nome);
		printf("Digite a 1º Nota: ");
		scanf("%f",&vet[i].n1);
		printf("Digite a 2º Nota: ");
		scanf("%f",&vet[i].n2);
		printf("Digite a 3º Nota: ");
		scanf("%f",&vet[i].n3);
	}
	system("cls");
		for(int i=0; i<tam; i++){
		printf("\nNúmero da Matrícula: %d\n",vet[i].num_matrc);
		printf("Nome: %s\n",vet[i].nome);
		printf("1º Nota: %.2f\n",vet[i].n1);
		printf("2º Nota: %.2f\n",vet[i].n2);
		printf("3º Nota: %.2f\n",vet[i].n3);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
