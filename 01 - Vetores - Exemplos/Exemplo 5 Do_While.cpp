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
		printf("\n Informe o valor para a vari�vel A: ");
		scanf("%d",&a);
		printf(" Informe o valor para a vari�vel B: ");
		scanf("%d",&b);
		r=a+b;
		printf("\n O valor da vari�vel R equivale a: %d\n",r);
		printf("\n\n Deseja contunuar ?\n");
		printf(" Tecle [S] para SIM ou [N] para N�o: ");
		fflush(stdin); // limpesa de buffer de memoria.
		scanf("%c",&resp);
		resp=toupper(resp); //Converte caracter min�sculo em mai�sculo.
	}while(resp=='s');
	printf("\n");
	system("Pause");
	return 0;
}

/**/
