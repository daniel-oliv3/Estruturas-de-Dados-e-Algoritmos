#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Maior Elemento
Criar um programa que preencha uma matriz de ordem 4
x 4 com elementos num�ricos inteiros, em seguida
verifique qual o maior elemento da matriz:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, maior=0, mat[4][4];
	printf("  Informe 16 n�meros para preencher a Matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("  Digite o %d� n�mero: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
		}
	}
	printf("  O maior n�mero da Matriz 4x4 �: %d\n",maior);
	system("Pause");
	return 0;
}

/**/
