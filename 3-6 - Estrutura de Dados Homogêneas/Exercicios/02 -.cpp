#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - Crie um programa que leia um vetor de 10 posições, escreva na tela quantos valores pares
foram armazenados nesse valor;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i=0, n=1, vetor[10];
	printf("\n");
	for(i=0; i<10; i++){
		printf("  Digite o %dº Número: ",n);
		scanf("%d",&vetor[i]);
		n++;
	}
	system("cls");
	printf("\n");
	for(i=0; i<10; i++){
	if((vetor[i]%2)==0){
			printf("  Número: %d é par\n",vetor[i]);
		}
	}
	system("Pause");
	return 0;
}

/*Aluno: Daniel Oliveira de Souza;
*/
