#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Ordenação dos Dados
Criar um programa que preencha um vetor de oito elementos
numéricos e mostre um vetor resultante com os mesmos
valores em ordem decrescente:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, aux, vet[8];
	printf("  Digite 8 números para preencher o vetor\n");
	for(i=0; i<8; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vet[i]);
	}	
	for(i=0; i<8; i++){
		for(j=i+1; j<8; j++){
			if(vet[j]>vet[i]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	system("cls");
	for(i=0; i<8; i++){
		printf("  %d\n",vet[i]);
	}
	system("Pause");
	return 0;
}

/**/
