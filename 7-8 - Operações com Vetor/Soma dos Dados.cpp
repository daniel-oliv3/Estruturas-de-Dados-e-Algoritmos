#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Criar um programa que preencha dois vetores de oito
elementos numéricos cada um e mostre o vetor resultante da
soma de cada elemento de vet1 com o elemento de mesma
posição do vet2:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet1[8]={2,5,7,5,9,2,1,3};
	int    vet2[8]={3,2,1,6,2,6,8,3};
	int vet3[8]={0};
	printf("\n");
	for(i=0; i<8; i++){
		vet3[i]=vet1[i]+vet2[i];
		printf("  vet3: %d\n",vet3[i]);
	}
	system("Pause");
	return 0;
}

/**/
