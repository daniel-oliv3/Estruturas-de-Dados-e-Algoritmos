#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5. Elabore uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação
que se deseja efetuar com os números. Assim, se o símbolo for “+”, deverá ser realizada uma adição,
símbolos aceitos ( +, -, *, / ). Retorne o resultado da operação para o programa principal:;*/

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
	printf("  [+] Soma\n  [-] Subtração\n  [*] Multiplicação\n  [/] Divisão\n");
	printf("operador: ");
	scanf("%c",&op);
	system("cls");
	printf("  Digite o 1º número: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número: ");
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
