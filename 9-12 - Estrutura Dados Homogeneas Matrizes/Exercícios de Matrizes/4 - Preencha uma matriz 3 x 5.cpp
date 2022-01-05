#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define L 3
#define C 5

/* 4 – Desenvolver um programa que preencha uma matriz 3 x 5
com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, cont=0, mat[L][C];
	printf("  Informe 15 números para preencher a Matriz 3x5\n");
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("  Digite o %dº número: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	system("cls");
	printf("\n"); 
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			if(mat[i][j]>15 && mat[i][j]<20){
				printf("  Mat[%d][%d] = %d\n",i,j,mat[i][j]);
				cont++;
			}
		}
	}
	printf("\n  Quantidade de elementos entre 15 e 20 é: %d\n",cont);    
	system("Pause");
	return 0;
}

/**/
