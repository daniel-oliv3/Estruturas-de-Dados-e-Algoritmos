#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. [0,5] Elabore uma função que receba dois valores numéricos e um símbolo. 
Esse símbolo representará a operação que se deseja efetuar com os números. Assim, se o símbolo for “+”, 
deverá ser realizada uma adição, símbolos aceitos ( +, -, *, / ). Retorne o resultado da operação para o programa principal;*/

int Operacao(int a, int b, char c){
	int r;
	if(c=='+'){
		r=a+b;
		return r; 
	}else{
		if(c=='-'){
			r=a-b;
			return r;
		}else{
			if(c=='*'){
				r=a*b;
				return r;
			}else{
				if(c=='/'){
					r=a/b;
					return r;
				}
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int v1, v2, re, op;
	printf("+---------- Operadores ----------+\n");
	printf("  [+] Soma\n  [-] Subtração\n  [*] Multiplicação\n  [/] Divisão\n");
	printf("+--------------------------------+\n\n");
	printf("  Digite o 1º número: ");
	scanf("%d",&v1);
	printf("  Digite o 2º número: ");
	scanf("%d",&v2);
	printf("\n");
	printf("+--------------------------------+\n");
	printf("  Informe a operação desejada: ");
	scanf("%s",&op);
	printf("+--------------------------------+\n\n");
	re=Operacao(v1, v2, op);
	if(op=='+'){
		printf("  Soma: %d + %d = %d\n",v1,v2,re);
	}else{
		if(op=='-'){
			printf("  Subtração: %d - %d = %d\n",v1,v2,re);
		}else{
			if(op=='*'){
				printf("  Multiplicação: %d * %d = %d\n",v1,v2,re);
			}else{
				if(op=='/'){
					printf("  Divisão: %d / %d = %d\n",v1,v2,re);
				}
			}
		}
	}
	printf("\n+--------------------------------+\n");
	system("Pause");
	return 0;
}

/*FACULDADE FUCAPI;
Aluno: Daniel Oliveira de Souza;
Turno: Noturno;
*/
