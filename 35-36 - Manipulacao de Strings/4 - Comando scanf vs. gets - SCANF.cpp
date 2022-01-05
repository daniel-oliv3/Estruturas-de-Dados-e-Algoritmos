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
	scanf("%s", re); // quando usamos a função scanf() para ler uma string, o simbolo de & antes do nome da variavel não é utilizada
	printf("  Oi %s\n",re);	
	system("Pause");
	return 0;
}

/*  A função scanf() lê apenas strings digitadas sem espaços, ou seja, palavras.*/
