#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 7 � Fa�a um programa que preencha um vetor com 10
elementos inteiros. Calcule e mostre a m�dia dos valores do
vetor.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float vetor[10], media=0;
	int i=0, n=0;
	printf("\n");
	for(i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ");
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	for(i=0; i<10; i++){
		
	}
	system("Pause");
	return 0;
}

/**/
