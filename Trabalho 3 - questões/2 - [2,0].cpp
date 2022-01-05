#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 10

/* 2 - Faça um programa que leia um array com 10 números de ponto flutuante. 
em seguida, ordene os elementos desses array em ordem crescente e imprima o array na tela;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x=0, y=0;
	float aux=0, vetor[tam];
	printf("  Informe 10 números para preencher o array\n");
	for(x=0; x<tam; x++){
		printf("  Digite o %dº número: ",x+1);
		scanf("%f",&aux);
		vetor[x]=aux;
	}
	system("cls");
	for(x=0; x<tam; x++){
		for(y=x+1; y<tam; y++){  
			if(vetor[x]>vetor[y]){
				aux=vetor[x];
				vetor[x]=vetor[y];
				vetor[y]=aux;
			}
		}
	} 
	printf("\n  Elementos ordenados em ordem Crescente\n");
	for(x=0; x<tam; x++){
		printf("  Array[%d] = %.1f\n",x,vetor[x]);
	}
	system("pause");
	return 0;
}

/* utilizar o padrão BR "," no lugar do "." EUA "setlocale"*/

/* Faculdade FUCAPI;
- Aluno: Daniel Oliveira de Souza;
- Aluna: Lizandra Caroline da Silva Nunes 
- Turma:
- Turno: Moturno;
*/
