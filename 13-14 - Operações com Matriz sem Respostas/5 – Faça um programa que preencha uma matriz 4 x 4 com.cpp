#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5 � Fa�a um programa que preencha uma matriz 4 x 4 com
elementos inteiros. Verifique e mostre qual o maior n�mero
dentro dessa matriz e a sua posi��o:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, maior, mat[4][4];
	printf("  Informe 16 n�meros para preencher a matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		printf("  Digite o %d� n�mero: ",c);
		scanf("%d",&mat[i][j]);	
		c++;
		}
	}
	maior=mat[0][0];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		if(mat[i][j]>maior){
			maior=mat[i][j];
			}
		}
	}
	printf("  O maior n�mero da matriz 4x4 �: %d\n",maior);
	system("Pause");
	return 0;
}

/**/
