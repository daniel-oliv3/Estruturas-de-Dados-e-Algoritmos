#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

/* 3. Faça um programa que leia um array bidimensional de tamanho 6 x 6. Em seguida, calcule e imprima os
elementos do array, exceto os valores contidos na diagonal principal:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, matriz_b[tam][tam];
	for(i=0; i<tam; i++){
		printf("%dº Linha\n",i+1);
		for(j=0; j<tam; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",&matriz_b[i][j]);
		}
	}
	system("cls");
	printf("\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
		if(matriz_b[i][j]!=matriz_b[i][i]){ // exceto diagonal principal
			printf("M[%d][%d] = %d\n",i,j,matriz_b[i][j]);
			}
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
