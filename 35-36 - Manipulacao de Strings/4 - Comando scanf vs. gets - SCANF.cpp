#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Estrutura de Dados e Algoritmos I
Para ler uma String

� Comando scanf vs. gets

;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char re[8];
	printf("  Digite o seu nome: ");
	scanf("%s", re); // quando usamos a fun��o scanf() para ler uma string, o simbolo de & antes do nome da variavel n�o � utilizada
	printf("  Oi %s\n",re);	
	system("Pause");
	return 0;
}

/*  A fun��o scanf() l� apenas strings digitadas sem espa�os, ou seja, palavras.*/
