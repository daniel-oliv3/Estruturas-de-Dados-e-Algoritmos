#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 15


/* 13. Fa�a um programa em C que preencha um array de 15 elementos inteiros. Em seguida, exclua o 4o.
elemento do array, e fa�a o deslocamento de uma posi��o dos elementos subsequentes, por exemplo: o
elemento que est� na 5a. posi��o vem para 4a. posi��o, o elemento que est� na 6a. posi��o vem para 5a.
posi��o, e assim por diante. No final, mostre o vetor resultante.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet[tam];
	printf("  Digite 15 n�meros para preencher o array\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&vet[i]);
	}
	for(i=0; i<tam; i++){
		
	}
	for(i=0; i<tam; i++){
		
	}
	system("Pause");
	return 0;
}

/**/
