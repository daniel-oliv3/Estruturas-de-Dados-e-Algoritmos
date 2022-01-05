#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 – Faça um programa que preencha uma matriz de dimensão 5 x
5. Identifique e mostre os valores ímpares dessa matriz e
também mostre a posição de cada um deles.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, mat[5][5];
	printf("  Informe 25 números para preencher a matriz 5x5\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("  Digite o %dº número: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	system("cls");
	printf("  Os números ímpares da matriz é\n\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(mat[i][j]%2==1){
				printf("  Matriz[%d][%d] = %d\n",i,j,mat[i][j]);
			}
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
