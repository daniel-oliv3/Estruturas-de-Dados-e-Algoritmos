#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Repeti��o do N�mero
Criar um programa que preencha uma matriz de ordem 4
x 4 com elementos num�ricos inteiros, em seguida o ler
um n�mero qualquer fornecido pelo usu�rio, verifique
quantas vezes esse n�mero se repete na matriz:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, num, mat[4][4];
	printf("  Informe 16 n�meros para preencher a Matriz 4x4\n");
	for(i=0; i<4; i++){
		printf("  %d� Linha\n",i+1);
		for(j=0; j<4; j++){
			printf("  Digite o %d� n�mero: ",j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	system("cls");
	printf("\n  Verificando elemento na matriz 4x4\n");
	printf("  Digite um n�mero: ");
	scanf("%d",&num);
	printf("\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(num==mat[i][j]){
				printf("  Mat[%d][%d] = %d\n",i,j,mat[i][j]);
			}
		}
	}
	system("Pause");
	return 0;
}

/**/
