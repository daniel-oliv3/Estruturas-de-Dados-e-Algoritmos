#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Busca de Dados
Criar um programa que preencha uma matriz de ordem 4
x 4 com elementos numéricos inteiros, em seguida o ler
um número qualquer fornecido pelo usuário, verifique se
o número existe na matriz e qual sua posição:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, num=0, mat[4][4];
	printf("  Informe 16 números para preencher a Matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("  Digite o %dº número: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	system("cls");
	printf("  Digite um número qualquer: ");
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
