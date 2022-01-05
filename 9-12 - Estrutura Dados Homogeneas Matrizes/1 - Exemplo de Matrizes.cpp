#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - Programa que lê os elementos de uma matriz 3x3;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numeros[3][3], l,c;
	for(l=0; l<3; l++){  // entrada de dados
		for(c=0; c<3; c++){
			printf("  Digite o número para %dº linha %dº coluna: ",l+1,c+1);
			scanf("%d",&numeros[l][c]);
		}
	}
	for(l=0; l<3; l++){ //saida de dados
		for(c=0; c<3; c++){
			printf("  Elemento número[%d][%d] = %d\n",l,c,numeros[l][c]);
		}
	}
	system("Pause");
	return 0;
}

/**/
