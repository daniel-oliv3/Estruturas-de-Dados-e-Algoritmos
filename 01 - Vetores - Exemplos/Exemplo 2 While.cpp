#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Programa que ler n vezes um conjunto de valores e imprimir a soma desses valores enquanto o usuario deseja;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b, r, resp;
	resp=1;
	while(resp==1){
		printf("\n Informe o valor para a variável A: ");
		scanf("%d",&a);
		printf(" Informe o valor para a variável B: ");
		scanf("%d",&b);
		r=a+b;
		printf("\n O valor da variável R equivale a: %d\n",r);
		printf("\n\n Deseja contunuar ?\n");
		printf(" Tecle [1] para SIM ou [2] para Não: ");
		scanf("%d",&resp);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
