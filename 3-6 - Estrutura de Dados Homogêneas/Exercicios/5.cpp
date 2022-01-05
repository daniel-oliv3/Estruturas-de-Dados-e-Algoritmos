#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5 – Crie um programa que leia um vetor com 8 posições. Em
seguida mostre na tela somente os valores que se encontram
nas posições pares do vetor (considere a posição zero).
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet[8];
	printf("\n");
	for(i=0; i<8; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vet[i]);
	}	
	
	
	system("Pause");
	return 0;
}

/**/
