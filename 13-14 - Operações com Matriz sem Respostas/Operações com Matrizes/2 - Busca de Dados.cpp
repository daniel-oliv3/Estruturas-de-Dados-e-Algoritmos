#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Busca de Dados
Criar um programa que preencha uma matriz de ordem 4
x 4 com elementos num�ricos inteiros, em seguida o ler
um n�mero qualquer fornecido pelo usu�rio, verifique se
o n�mero existe na matriz e qual sua posi��o:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, num=0, mat[4][4];
	printf("  Informe 16 n�meros para preencher a Matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("  Digite o %d� n�mero: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	system("cls");
	printf("  Digite um n�mero qualquer: ");
	scanf("%d",&num);
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(num==mat[i][j]){
				printf("  Matriz[%d][%d] = %d\n",i,j,mat[i][j]);
			}
		}
	}
	system("Pause");
	return 0;
}

/**/
