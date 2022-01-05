#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Diagonal Secundária
Criar um programa que preencha uma matriz de ordem 5
x 5 com elementos numéricos inteiros, em seguida
mostre apenas os elementos da matriz que encontram-se
na diagonal secundária:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, mat[5][5];
	printf("  Informe 25 números para preencher a Matriz 5x5\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("  Digite o %dº número: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	system("cls");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(j==(5-1-i)){
				printf("  Matriz[%d][%d] = %d\n",i+1,j+1,mat[i][j]);
			}
		}
	}
	system("Pause");
	return 0;
}

/**/
