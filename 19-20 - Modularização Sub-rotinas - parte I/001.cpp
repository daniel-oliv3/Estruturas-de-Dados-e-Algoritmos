#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*1. Fa�a um programa contendo uma sub-rotina que receba
dois n�meros positivos por par�metros e retorne a soma
dos N n�meros inteiros existentes entre eles: ;*/

int soma2num(int n1, int n2){
	int soma;
 
	return  n1 + n2;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n1, n2, soma;
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&n1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&n2);
	soma = soma2num(n1, n2);
	printf("  O resultado da soma �: %d + %d = %d\n",n1,n2,soma);
	system("Pause");
	return 0;
}

/**/
