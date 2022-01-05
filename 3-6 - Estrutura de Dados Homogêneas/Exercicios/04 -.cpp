#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 4 – Faça um programa que receba do usuário um vetor X com
10 posições. Em seguida, deverão ser impressos o maior
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
		printf("  Digite o %dº número: ",i+1);
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
	printf("Maior número: %d\n",maior);
	printf("Menor número: %d\n",menor);
	system("Pause");
	return 0;
}

/**/
