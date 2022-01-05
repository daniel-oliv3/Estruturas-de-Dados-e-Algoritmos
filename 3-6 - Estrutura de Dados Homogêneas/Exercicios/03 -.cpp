#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 – Faça um programa que preencha um vetor com 10
elementos inteiros. Calcule e mostre apenas os números
ímpares e qual a quantidade de números ímpares.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, quant, vet[10];
	printf("\n");
	for(int i=0; i<10; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vet[i]);
	}
	system("cls");
	printf("\n");
	for(int i=0; i<10; i++){
		if((vet[i]%2)==1){
			printf("    Número ímpar: %d\n",vet[i]);
			quant++;
		}
	}
	printf("\n");
	printf("  A quantidade de números ímpares: %d\n",quant);
	system("Pause");
	return 0;
}

/**/
