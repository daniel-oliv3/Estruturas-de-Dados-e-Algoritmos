#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 15


/* 13. Faça um programa em C que preencha um array de 15 elementos inteiros. Em seguida, exclua o 4o.
elemento do array, e faça o deslocamento de uma posição dos elementos subsequentes, por exemplo: o
elemento que está na 5a. posição vem para 4a. posição, o elemento que está na 6a. posição vem para 5a.
posição, e assim por diante. No final, mostre o vetor resultante.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet[tam];
	printf("  Digite 15 números para preencher o array\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vet[i]);
	}
	for(i=0; i<tam; i++){
		
	}
	for(i=0; i<tam; i++){
		
	}
	system("Pause");
	return 0;
}

/**/
