#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 � Fa�a um programa que preencha um vetor com 10
elementos inteiros. Calcule e mostre apenas os n�meros
�mpares e qual a quantidade de n�meros �mpares.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, quant, vet[10];
	printf("\n");
	for(int i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&vet[i]);
	}
	system("cls");
	printf("\n");
	for(int i=0; i<10; i++){
		if((vet[i]%2)==1){
			printf("    N�mero �mpar: %d\n",vet[i]);
			quant++;
		}
	}
	printf("\n");
	printf("  A quantidade de n�meros �mpares: %d\n",quant);
	system("Pause");
	return 0;
}

/**/
