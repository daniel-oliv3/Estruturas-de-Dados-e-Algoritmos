#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 � Fa�a um programa que preencha uma matriz de dimens�o 5 x
5. Identifique e mostre os valores �mpares dessa matriz e
tamb�m mostre a posi��o de cada um deles.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, mat[5][5];
	printf("  Informe 25 n�meros para preencher a matriz 5x5\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("  Digite o %d� n�mero: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	system("cls");
	printf("  Os n�meros �mpares da matriz �\n\n");
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
