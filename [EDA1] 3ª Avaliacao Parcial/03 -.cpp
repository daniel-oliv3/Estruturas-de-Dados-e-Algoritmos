#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 3. [1,0] Fa�a um programa cujo menu de op��es seja como apresentado abaixo utilizando sub-rotinas. 
Ap�s escolher uma op��o, o usu�rio deve informar o valor a ser usado para o c�lculo. N�o utilize fun��es 
pr�-definidas pela biblioteca math.h e utilize pelo menos dois tipos de estruturas de repeti��o distintos:
PROGRAMA MATEM�TICA LEGAL
MENU DE OP��ES:
[ 1 ] Calcular o Fatorial
[ 2 ] Calcular a Pot�ncia
[ 3 ] Calcular Fibonacci
[ 0 ] Encerrar o Programa
DIGITE UMA OP��O:;*/

int menu(int a){
		switch(a){
		case 1:
		int fatorial, resposta;
		resposta=1;
		printf("Informe um n�mero para calcular o FATORIAL: ");
		scanf("%d",&fatorial);
		for(; fatorial>=1; --fatorial){
			resposta*=fatorial; //respostar=resposta*fatorial 
		}
		return resposta;	
    	case 2:
			int c, base, expoent;
			printf("Entre com o n�mero base: ");
			scanf("%d",&base);
			printf("Entre com o expoente desse n�mero: ");
			scanf("%d",&expoent);
			c=pow(base, expoent);
			return c;
		case 3:
			int numero, f1, f2, f3;
			f1=0; f2=1;
			printf("  Digite um n�mero: ");
			scanf("%d",&numero);
			if(numero < 0){
			printf("  <N�mero Inv�lido!>\n\a");
			}else{
			printf("  0 -1");
			while(f2 < numero){
			f3=f2+f1;
			printf("  -%d",f3);
			f1=f2;
			f2=f3;
				}	
			}
			return f3;
		case 0:
		return 0;
	}
}
int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int op, r, c, fat, f3, resposta;
	printf("+------------- MENU DE OP��ES -------------+\n");
	printf("[ 1 ] Calcular o Fatorial\n[ 2 ] Calcular a Pot�ncia\n[ 3 ] Calcular Fibonacci\n[ 0 ] Encerrar o Programa\n");
	printf("+------------------------------------------+\n");
	printf("Operador: ");
	scanf("%d",&op);
	printf("+------------------------------------------+\n");
	if(op==1){
		printf("O n�mero Fatorial �: %d\n",resposta=menu(op));
	}else{
		if(op==2){
			printf("A pot�ncia �: %d\n",c=menu(op));
		}else{
			if(op==3){
				//printf(" -%d",f3=menu(op));
			}else{
				if(op==0){
					printf("%d Encerrar o Programa\n",menu(op));
				}
			}
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/* FACULDADE FUCAPI
Aluno Daniel Oliveira de Souza
Turno Noturno
*/
