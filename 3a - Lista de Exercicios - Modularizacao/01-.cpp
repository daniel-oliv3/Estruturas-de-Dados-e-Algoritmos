#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. Escreva uma fun��o que receba por par�metro dois 
n�meros e retorne o maior elemento deles:;*/

int funcao(int a, int b){
	if(a>b){
		return a;
	}else{
		if(a<b){
			return b;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, resultado;
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&num2);
	resultado=funcao(num1, num2);
	printf("  O maior n�mero �: %d\n",resultado);
	system("Pause");
	return 0;
}

/**/
