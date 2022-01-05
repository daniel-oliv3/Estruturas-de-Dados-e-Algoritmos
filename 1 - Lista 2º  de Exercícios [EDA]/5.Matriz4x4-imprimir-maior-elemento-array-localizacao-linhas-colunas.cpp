#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*5. Faça um programa que leia um array bidimensional de tamanho 4 x 4. Ao final imprimir na tela o maior
valor contido nesse array e sua localização (linha e coluna): ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, pi=0, pj=0, maior, array_b[4][4];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",&array_b[i][j]);
		}
	}
	system("cls");
	maior=array_b[0][0];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(array_b[i][j]>maior){
				maior=array_b[i][j];
				pi=i;
				pj=j;
			}
		}
	}
	printf("\nO maior número é M[%d][%d] = %d\n",pi,pj,maior);
	system("Pause");
	return 0;
}

/**/
