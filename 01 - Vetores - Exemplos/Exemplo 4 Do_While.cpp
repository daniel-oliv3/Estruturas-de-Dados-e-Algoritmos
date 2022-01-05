#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Programa que ler cinco vezes um conjunto de dois valores e imprimir a som desses valores.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b, r,c;
	c=1;
	do{
		printf("\n");
		printf(" informe o valor para A: ");
		scanf("%d",&a);
		printf(" informe o valor para B: ");
		scanf("%d",&b);
		r=a+b;
		printf("\n");
		printf(" O %d valor da variável R equivale a: %d\n",c,r);
		c=c+1;
	}while(c<=5);
	printf("\n");
	system("Pause");
	return 0;
}

/**/
