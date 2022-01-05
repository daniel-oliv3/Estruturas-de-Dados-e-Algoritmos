#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 6 – Faça um programa que preencha uma matriz 5 x 6 de valores
inteiros. Verifique e mostre qual o menor número dentro
dessa matriz e a posição que ele ocupa.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, menor, mat[5][6];
	printf("  Informe 30 números para preencher a matriz 5x6\n");
	for(i=0; i<5; i++){
		for(j=0; j<6; j++){
		printf("  Digite o %dº número: ",c);
		scanf("%d",&mat[i][j]);	
		c++;
		}
	}
	system("cls");
	menor=mat[0][0];
	for(i=0; i<5; i++){
		for(j=0; j<6; j++){
		if(mat[i][j]<menor){
			menor=mat[i][j];
			printf("\n  A posição é Matriz[%d][%d]: \n",mat[i][j]);
			}
		}
	}
	printf("  O menor número da matriz 5x6 é: %d\n",menor);
	system("Pause");
	return 0;
}

/**/
