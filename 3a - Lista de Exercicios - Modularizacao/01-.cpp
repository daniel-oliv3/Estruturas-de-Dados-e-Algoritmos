#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. Escreva uma função que receba por parâmetro dois 
números e retorne o maior elemento deles:;*/

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
	printf("  Digite o 1º número: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número: ");
	scanf("%d",&num2);
	resultado=funcao(num1, num2);
	printf("  O maior número é: %d\n",resultado);
	system("Pause");
	return 0;
}

/**/
