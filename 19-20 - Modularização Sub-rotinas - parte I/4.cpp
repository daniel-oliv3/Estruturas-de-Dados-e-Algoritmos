#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3. Fa�a uma programa que leia dois n�meros inteiros a e b,
sendo que o usu�rio deve escolher qual opera��o
matem�tica deseja calcular atrav�s de uma sub-rotina.
Dependendo da escolha do usu�rio, para cada op��o
deve chamar uma outra sub-rotina para realizar o c�lculo
da opera��o, deve ser feita uma sub-rotina para cada
opera��o:
1 � Adi��o
2 � Subtra��o
3 � Multiplica��o
4 � Divis�o
*Lembre-se que n�o tem divis�o por zero.;*/

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
	printf("[1] Adi��o\n[2] Subtra��o\n[3] Multiplica��o\n[4] Divis�o\n");
	printf("Operador: ");
	scanf("%d",&operador);
	printf("\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&numero1);
	printf("Digite o segundo n�mero: ");
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
