#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. Fa�a um programa contendo uma su-rotina que receba dois n�meros positivos por par�metros
e retorne a soma dos N n�meros inteiros existentes entre eles.;*/


int somaN(int a, int b){
	return(a + b);
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("  Digite um n�mero: ");
	scanf("%d",&num1);
	printf("  Digite um n�mero: ");
	scanf("%d",&num2);
	system("Pause");
	return 0;
}

/**/
