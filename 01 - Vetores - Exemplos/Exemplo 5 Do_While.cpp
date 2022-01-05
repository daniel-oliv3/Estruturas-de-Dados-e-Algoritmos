#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* Programa que ler n vezes um conjunto de valores e imprimir a soma desses valores enquanto o usuario deseja;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char resp;
	int a, b, r;
	do{
		printf("\n Informe o valor para a variável A: ");
		scanf("%d",&a);
		printf(" Informe o valor para a variável B: ");
		scanf("%d",&b);
		r=a+b;
		printf("\n O valor da variável R equivale a: %d\n",r);
		printf("\n\n Deseja contunuar ?\n");
		printf(" Tecle [S] para SIM ou [N] para Não: ");
		fflush(stdin); // limpesa de buffer de memoria.
		scanf("%c",&resp);
		resp=toupper(resp); //Converte caracter minúsculo em maiúsculo.
	}while(resp=='s');
	printf("\n");
	system("Pause");
	return 0;
}

/**/
