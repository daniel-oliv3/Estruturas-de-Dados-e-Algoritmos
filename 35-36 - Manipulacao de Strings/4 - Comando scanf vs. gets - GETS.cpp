#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Estrutura de Dados e Algoritmos I
Para ler uma String

• Comando scanf vs. gets

;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char re[8];
	printf("  Digite o seu nome: ");
	gets(re); // le com espaços em brancos até encontrar uma tecla enter.
	printf("  Oi %s\n",re);	
	system("Pause");
	return 0;
}

/*  */
