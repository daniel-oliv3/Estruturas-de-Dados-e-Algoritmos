#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 – Crie um programa que leia do teclado seis valores inteiros
e armazene em um vetor, em seguida mostre na tela os
valores lidos na ordem inversa.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vetor[6];
	printf("\n");
	for(int i=0; i<6; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	for(int i=6; i>-1; i--){
		printf("    %d\n",vetor[i]);
	}
	system("Pause");
	return 0;
}

/**/
