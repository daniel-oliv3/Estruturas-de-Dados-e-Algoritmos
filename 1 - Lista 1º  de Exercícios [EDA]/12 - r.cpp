#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 10

/* 12. Fa�a um programa em C que leia o pre�o de compra e o pre�o de venda de 10 mercadorias e armazene-os
utilizando dois arrays unidimensionais. O programa dever� imprimir quantas mercadorias proporcionam:
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
	printf("  Digite o pre�o de compra de 10 mercadorias\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %� valor da compra: ",i+1);
		scanf("%d",&p_compra[i]);
	}
	printf("  Digite o pre�o de venda de 10 mercadorias\n");
	for(i=0; i<tam; i++){
		printf("  Digite o %� valor da venda: ",i+1);
		scanf("%d",&p_venda[i]);
	}
	
	system("Pause");
	return 0;
}

/**/
