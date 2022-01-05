#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 10

/* 12. Faça um programa em C que leia o preço de compra e o preço de venda de 10 mercadorias e armazene-os
utilizando dois arrays unidimensionais. O programa deverá imprimir quantas mercadorias proporcionam:
* Lucro < 10%
* 10% <= Lucro <= 20%
* Lucro > 20%
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	float p_compra[tam], p_venda[tam];
	printf("  Digite o preço de compra de 10 mercadorias\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %º valor da compra: ",i+1);
		scanf("%d",&p_compra[i]);
	}
	printf("  Digite o preço de venda de 10 mercadorias\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %º valor da venda: ",i+1);
		scanf("%d",&p_venda[i]);
	}
	
	system("Pause");
	return 0;
}

/**/
