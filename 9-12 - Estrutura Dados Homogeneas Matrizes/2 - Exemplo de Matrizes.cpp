#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - Exemplo de Matrizes
 
 Programa que lê os elementos de uma matriz 4x4
 
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numeros[4][4], l,c;
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			printf("  Digite o elemento [%d][%d]: ",l,c);
			scanf("%d",&numeros[l][c]);
		}
	}
	printf("\n\n");
	for(l=0; l<4; l++){ // impressão em forma de matriz
		for(c=0; c<4; c++){
			printf("  [%d][%d] = %d ",l,c,numeros[l][c]);
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
