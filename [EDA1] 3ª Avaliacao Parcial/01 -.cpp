#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. [0,5] Elabore uma fun��o que receba dois valores num�ricos e um s�mbolo. 
Esse s�mbolo representar� a opera��o que se deseja efetuar com os n�meros. Assim, se o s�mbolo for �+�, 
dever� ser realizada uma adi��o, s�mbolos aceitos ( +, -, *, / ). Retorne o resultado da opera��o para o programa principal;*/

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
	printf("  [+] Soma\n  [-] Subtra��o\n  [*] Multiplica��o\n  [/] Divis�o\n");
	printf("+--------------------------------+\n\n");
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&v1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&v2);
	printf("\n");
	printf("+--------------------------------+\n");
	printf("  Informe a opera��o desejada: ");
	scanf("%s",&op);
	printf("+--------------------------------+\n\n");
	re=Operacao(v1, v2, op);
	if(op=='+'){
		printf("  Soma: %d + %d = %d\n",v1,v2,re);
	}else{
		if(op=='-'){
			printf("  Subtra��o: %d - %d = %d\n",v1,v2,re);
		}else{
			if(op=='*'){
				printf("  Multiplica��o: %d * %d = %d\n",v1,v2,re);
			}else{
				if(op=='/'){
					printf("  Divis�o: %d / %d = %d\n",v1,v2,re);
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
