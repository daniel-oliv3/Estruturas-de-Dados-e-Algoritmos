#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. Faça um programa contendo uma su-rotina que receba dois números positivos por parâmetros
e retorne a soma dos N números inteiros existentes entre eles.;*/


int somaN(int a, int b){
	return(a + b);
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("  Digite um número: ");
	scanf("%d",&num1);
	printf("  Digite um número: ");
	scanf("%d",&num2);
	system("Pause");
	return 0;
}

/**/
