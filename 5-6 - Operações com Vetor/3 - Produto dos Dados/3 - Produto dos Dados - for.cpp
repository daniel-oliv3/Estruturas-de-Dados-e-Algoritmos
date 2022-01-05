#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Produto dos Dados
Criar um programa que preencha dois vetores de oito
elementos numéricos cada um e mostre o vetor resultante do
produto de cada elemento de vet1 com o elemento de mesma
posição do vet2:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet1[8], vet2[8], vetr[8]={0};
	printf("  Digite 8 números para o Vetor A\n");
	for(i=0; i<8; i++){
		printf("  %dº Número: ",i+1);
		scanf("%d",&vet1[i]);
	}
	system("cls");
	printf("  Digite 8 Números para o Vetor B\n");
	for(i=0; i<8; i++){
		printf("  %dº Número: ",i+1);
		scanf("%d",&vet2[i]);
		vetr[i]=vet1[i]*vet2[i];
	}	
		system("cls");
		printf("  Produto dos Dados\n");
	for(i=0; i<8; i++){
		printf("  A: %d x B: %d = %d\n",vet1[i],vet2[i],vetr[i]);
	}		
	

	system("Pause");
	return 0;
}

/**/
