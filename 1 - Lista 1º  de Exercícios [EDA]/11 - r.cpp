#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 20

/* 11. Fa�a um programa em C que preencha um array unidimensional com 20 n�meros inteiros. Determine e
mostre, a seguir, quais elementos do array est�o repetidos e quantas vezes cada um dos n�meros se repete:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, cont=0, vet[tam];
	printf("  Digite 20 n�meros para preencher o Array\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&vet[i]);
	}
		for(i=0; i<tam; i++){
			if(vet[i]==vet[i+1]){
				printf("  Elemento repedido no array: %d\n",vet[i]);
				cont++;
			}
		}
	printf("  A quantidade de n�meros repetidos no array �: %d\n",cont);
	system("Pause");
	return 0;
}

/**/
