#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 6 – Crie um programa que leia um vetor de 10 posições.
Escreva na tela quais são as posições do vetor que se
encontram com valores ímpares.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int vet[10], i;
	printf("\n");
	for(i=0; i<10; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vet[i]);
	}
	system("cls");
	for(i=0; i<10; i++){
		if(vet[i] % 2==1){
			printf("  O número %d estar na posição: %d - Ímpar\n",vet[i],i);
		}
	}	
	printf("\n");
	system("Pause");
	return 0;
}

/**/
