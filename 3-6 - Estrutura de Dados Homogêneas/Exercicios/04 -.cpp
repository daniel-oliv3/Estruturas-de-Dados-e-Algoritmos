#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 4 � Fa�a um programa que receba do usu�rio um vetor X com
10 posi��es. Em seguida, dever�o ser impressos o maior
e o menor elemento desse vetor.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, maior, menor, x[10];
	maior=x[0];
	menor=x[0];
	printf("\n");
	for(int i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&x[i]);
	}	
	printf("\n");
	for(int i=0; i<10; i++){
		if(maior>x[i]){
			maior=x[i];
		}else{
			if(menor<x[i]){
				menor=x[i];
			}
		}
	}	
	printf("Maior n�mero: %d\n",maior);
	printf("Menor n�mero: %d\n",menor);
	system("Pause");
	return 0;
}

/**/
