#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3. Faça uma programa que leia dois números inteiros a e b,
sendo que o usuário deve escolher qual operação
matemática deseja calcular através de uma sub-rotina.
Dependendo da escolha do usuário, para cada opção
deve chamar uma outra sub-rotina para realizar o cálculo
da operação, deve ser feita uma sub-rotina para cada
operação:
1 – Adição
2 – Subtração
3 – Multiplicação
4 – Divisão
*Lembre-se que não tem divisão por zero.;*/

int operadores(int op, int num1, int num2){
	if(op==1){
		return num1+num2;
	}else{
		if(op==2){
			return num1-num2;
		}else{
			if(op==3){
				return num1*num2;
			}else{
				if(op==4){
					return num1/num2;
				}
			}
		}
	}
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int operador, numero1, numero2, result;
	printf("[1] Adição\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n");
	printf("Operador: ");
	scanf("%d",&operador);
	printf("\n");
	printf("Digite o primeiro número: ");
	scanf("%d",&numero1);
	printf("Digite o segundo número: ");
	scanf("%d",&numero2);
	printf("\n");
	result=operadores(operador, numero1, numero2);
	if(operador==1){
		printf("%d + %d = %d\n",numero1,numero2,result);
	}else{
		if(operador==2){
			printf("%d - %d = %d\n",numero1,numero2,result);
		}else{
			if(operador==3){
				printf("%d * %d = %d\n",numero1,numero2,result);
			}else{
				if(operador==4){
					printf("%d / %d = %d\n",numero1,numero2,result);
				}
			}
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
