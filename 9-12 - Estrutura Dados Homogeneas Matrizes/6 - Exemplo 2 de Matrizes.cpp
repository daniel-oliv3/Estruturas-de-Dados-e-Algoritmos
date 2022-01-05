#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Programa que lê os elementos de uma matriz com tamanho definido pelo usuario;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int linha, coluna, i, j;
	printf("  Matriz simples\n");
	printf("  Insira o número de linhas: ");
	scanf("%d",&linha);
	printf("  Insira o número de colunas: ");
	scanf("%d",&coluna);
	int mat[linha][coluna];
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("  Digite o elemento [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	system("cls");
	printf("\n\n  Matriz  \n\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("\t [%d][%d]=%d",i,j,mat[i][j]);
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
