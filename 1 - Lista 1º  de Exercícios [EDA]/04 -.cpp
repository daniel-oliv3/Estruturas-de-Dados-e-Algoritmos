#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*4. Faça um programa em C que leia dois arrays de números inteiros, tendo cada um 10 e 20 elementos, 
respectivamente, no final apresentar os elementos que não são comuns aos dois arrays. ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, encontrou, vetA[10], vetB[20];
	printf("  Digite 10 números para o primeiro vetor: \n");
	for(i=0; i<10; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vetA[i]);
	}
	printf("  Digite 20 números para o segundo vetor: \n");
	for(j=0; j<20; j++){
		printf("  Digite o %dº número: ",j+1);
		scanf("%d",&vetB[j]);
	}
	for(j=0; j<20; j++){
		for(i=0; i<10; i++){
			if(vetB[j]!=vetA[i]){
			
			}
		}
	}
	
	system("Pause");
	return 0;
}

/**/
