#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*4. Fa�a um programa em C que leia dois arrays de n�meros inteiros, tendo cada um 10 e 20 elementos, 
respectivamente, no final apresentar os elementos que n�o s�o comuns aos dois arrays. ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, encontrou, vetA[10], vetB[20];
	printf("  Digite 10 n�meros para o primeiro vetor: \n");
	for(i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&vetA[i]);
	}
	printf("  Digite 20 n�meros para o segundo vetor: \n");
	for(j=0; j<20; j++){
		printf("  Digite o %d� n�mero: ",j+1);
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
