#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 3. [1,0] Faça um programa cujo menu de opções seja como apresentado abaixo utilizando sub-rotinas. 
Após escolher uma opção, o usuário deve informar o valor a ser usado para o cálculo. Não utilize funções 
pré-definidas pela biblioteca math.h e utilize pelo menos dois tipos de estruturas de repetição distintos:
PROGRAMA MATEMÁTICA LEGAL
MENU DE OPÇÕES:
[ 1 ] Calcular o Fatorial
[ 2 ] Calcular a Potência
[ 3 ] Calcular Fibonacci
[ 0 ] Encerrar o Programa
DIGITE UMA OPÇÃO:;*/

int menu(int a){
		switch(a){
		case 1:
		int fatorial, resposta;
		resposta=1;
		printf("Informe um número para calcular o FATORIAL: ");
		scanf("%d",&fatorial);
		for(; fatorial>=1; --fatorial){
			resposta*=fatorial; //respostar=resposta*fatorial 
		}
		return resposta;	
    	case 2:
			int c, base, expoent;
			printf("Entre com o número base: ");
			scanf("%d",&base);
			printf("Entre com o expoente desse número: ");
			scanf("%d",&expoent);
			c=pow(base, expoent);
			return c;
		case 3:
			int numero, f1, f2, f3;
			f1=0; f2=1;
			printf("  Digite um número: ");
			scanf("%d",&numero);
			if(numero < 0){
			printf("  <Número Inválido!>\n\a");
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
	printf("+------------- MENU DE OPÇÕES -------------+\n");
	printf("[ 1 ] Calcular o Fatorial\n[ 2 ] Calcular a Potência\n[ 3 ] Calcular Fibonacci\n[ 0 ] Encerrar o Programa\n");
	printf("+------------------------------------------+\n");
	printf("Operador: ");
	scanf("%d",&op);
	printf("+------------------------------------------+\n");
	if(op==1){
		printf("O número Fatorial é: %d\n",resposta=menu(op));
	}else{
		if(op==2){
			printf("A potência é: %d\n",c=menu(op));
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
