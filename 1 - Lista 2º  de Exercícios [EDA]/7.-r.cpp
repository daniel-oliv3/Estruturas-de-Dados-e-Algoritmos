#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

/* 7. Faça um programa que leia um array bidimensional de tamanho 10 x 10, calcular e imprimir na tela a
matriz formada pelas seguintes regras:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i2 – 1 se i = j
A[i][j] = 4i3 + 5j2 + 1 se i > j;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, A[tam][tam];
	for(i=0; i<tam; i++){
		printf("%dº \n",i+1);
		for(j=0; j<tam; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i<j){
				
			}else{
				if(i==j){
					
				}
			}
		}
	}
	system("Pause");
	return 0;
}

/**/
