#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 2

/* 4. Fa�a um programa que leia um array bidimensional de tamanho 5 x 5. Em seguida, calcule e imprima os
elementos do array, exceto os valores contidos na diagonal secund�ria:;*/

void Limpar(); //Prototipo da fun��o auxiliar: limpar

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i=0, j=0, array_b[tam][tam];
	for(i=0; i<tam; i++){
		printf("%d� Linha +--- \n",i+1);		
		for(j=0; j<tam; j++){
			printf("Digite o %d� n�mero: ",j+1);
			scanf("%d",&array_b[i][j]);
		}
	}
	Limpar(); // chamada a fun��o limpar
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i+j != 9){
				printf("Array[%d][%d] = %d\n",i,j,array_b[i][j]);
			}
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/

void Limpar(){ //Fun��o Limpar. sem retorno
	system("cls");
}
