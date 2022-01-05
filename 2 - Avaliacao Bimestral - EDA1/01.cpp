#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 5


/* 1. [2,5] Faca um programa em C que seja uma estrutura representando os alunos do curso de Introducao a Programacao de Computadores. 
A estrutura deve conter a matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova:
„h Permita ao usuario entrar com os dados de 5 alunos utilizando array (escopo global).
„h Encontre o aluno com maior nota da segunda prova:;*/

void Limpar(); // Prototipo da função auxiliar limpar

struct ficha{ //definindo uma struct
		int matricula;
		char nome[50];
		float nota[3];
}typedef ficha;

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j;
	float maior=0.0;
	ficha aluno[5]; // declarando uma strutura aluno do tipo ficha
	for(i=0; i<tam; i++){
		printf("\nDigite o número da %dº matricula: ",i+1);
		scanf("%d",&aluno[i].matricula);
		getchar(); // limpar o buffer do teclado.
		printf("Digite o seu nome: ");
		gets(aluno[i].nome);
		for(j=0; j<3; j++){
			printf("Digite a nota da %dº prova: ",j+1);
			scanf("%f",&aluno[i].nota[j]);		
		}
		Limpar(); // chamada a função limpar a tela
	}
	Limpar(); // chamada a função limpar a tela
	for(i=0; i<tam; i++){
		if(aluno[i].nota[1] > maior){
			maior=aluno[i].nota[1];
			printf("\nO aluno %s tem A maior nota da segunda prova é: %.2f\n",aluno[i].nome, maior);
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

void Limpar(){ //Função Limpar a tela, função sem retorno
	system("cls");
}

/*
FACULDADE FUCAPI
ALUNO: DANIEL OLIVEIRA DE SOUZA
TURNO: NOTURNO
*/
