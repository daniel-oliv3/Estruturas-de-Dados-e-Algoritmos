#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h> // para o funcionamento da função strcpy();

/* Estrutura de Dados e Algoritmos I
Função strcpy()
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[100], str2[100], str3[100];
	printf("  Entre com uma string: ");
	gets(str1);	
	strcpy(str2,str1);  // a função strcpy() copia a string-origem para a string-destino.
	strcpy(str3, "Você digitou a string: ");  // copiou a string entre "aspas duplas" para a variavel str3.
	printf("\n  %s %s\n",str3,str2);
	system("Pause");
	return 0;
}

/**/
