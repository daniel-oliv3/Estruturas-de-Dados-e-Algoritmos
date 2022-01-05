#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

/* 10. Faça um programa que leia um array bidimensional de tamanho 8 x 8 com valores numéricos inteiros e
positivos. Indicar qual é o maior e menor valor da linha 5 e qual é o maior e menor valor da coluna 7:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, arrayb[tam][tam];
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",arrayb[i][j]);	
		}
	}
	for(i=0; i<tam; i++){
		if(i==5)
		for(j=0; j<tam; j++){
				
		}
	}
	system("Pause");
	return 0;
}

/**/
