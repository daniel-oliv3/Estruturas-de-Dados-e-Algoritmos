#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5 � Crie um programa que leia um vetor com 8 posi��es. Em
seguida mostre na tela somente os valores que se encontram
nas posi��es pares do vetor (considere a posi��o zero).
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet[8];
	printf("\n");
	for(i=0; i<8; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&vet[i]);
	}	
	
	
	system("Pause");
	return 0;
}

/**/
