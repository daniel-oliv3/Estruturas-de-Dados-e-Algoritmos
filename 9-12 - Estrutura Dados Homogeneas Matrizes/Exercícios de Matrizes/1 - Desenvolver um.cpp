#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 – Desenvolver um programa que leia e imprima os valores
de uma matriz 3 x 4 do tipo inteiro:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int mat[3][4], i, j;
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("  Digite o %dº número: ",j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	system("cls");
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("  Mat[%d][%d] = %d",i,j,mat[i][j]);  //3 linhas 4 colunas
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
