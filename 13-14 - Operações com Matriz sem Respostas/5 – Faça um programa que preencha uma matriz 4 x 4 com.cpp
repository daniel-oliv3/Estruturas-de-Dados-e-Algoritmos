#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5 – Faça um programa que preencha uma matriz 4 x 4 com
elementos inteiros. Verifique e mostre qual o maior número
dentro dessa matriz e a sua posição:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, maior, mat[4][4];
	printf("  Informe 16 números para preencher a matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		printf("  Digite o %dº número: ",c);
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
	printf("  O maior número da matriz 4x4 é: %d\n",maior);
	system("Pause");
	return 0;
}

/**/
