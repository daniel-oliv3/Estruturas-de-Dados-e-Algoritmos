#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5. Elabore uma fun��o que receba dois valores num�ricos e um s�mbolo. Esse s�mbolo representar� a opera��o
que se deseja efetuar com os n�meros. Assim, se o s�mbolo for �+�, dever� ser realizada uma adi��o,
s�mbolos aceitos ( +, -, *, / ). Retorne o resultado da opera��o para o programa principal:;*/

int operadores(int a, int b, char x){
	if(x=='+'){
		return a+b;
	}else{
		if(x=='-'){
			return a-b;
		}else{
			if(x=='*'){
				return a*b;
			}else{
				if(x=='/'){
					return a/b;
				}
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char op;
	int num1, num2, resultado;
	printf("+--- Informe o operador ---+\n");
	printf("  [+] Soma\n  [-] Subtra��o\n  [*] Multiplica��o\n  [/] Divis�o\n");
	printf("operador: ");
	scanf("%c",&op);
	system("cls");
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&num2);
	resultado=operadores(num1, num2, op);
		if(op=='+'){
		printf("  %d + %d = %d\n",num1, num2, resultado);
	}else{
		if(op=='-'){
			printf("  %d - %d = %d\n",num1, num2, resultado);
		}else{
			if(op=='*'){
				printf("  %d * %d = %d\n",num1, num2, resultado);
			}else{
				if(op=='/'){
					printf("  %d / %d = %d\n",num1, num2, resultado);
				}
			}
		}
	}
	system("Pause");
	return 0;
}

/**/
