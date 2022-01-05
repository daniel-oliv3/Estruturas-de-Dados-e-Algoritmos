#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 - Programa que lê os elementos de uma matriz 3x4 e imprime os elementos por linha ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numeros[3][4], i, j;
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("  Digite o elemento[%d][%d]: ",i,j);
			scanf("%d",&numeros[i][j]);
		}
	}
	printf("\n\n");
	for(i=0; i<3; i++){
		printf("\n\n  Elemento da linha %d ",i);
		for(j=0; j<4; j++){
			printf("  %d",numeros[i][j]);
		}
	}
	printf("\n\n");
	system("Pause");
	return 0;
}

/*[3]linhas, [4]colunas.*/
