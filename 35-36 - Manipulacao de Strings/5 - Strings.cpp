#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Estrutura de Dados e Algoritmos I
Strings
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];  // tamanho maximo da string 99 caracteres
	printf("  Digite uma string: ");
	gets(string);
	printf("\n  Você digitou: %s\n",string);	
	system("Pause");
	return 0;
}

/**/
