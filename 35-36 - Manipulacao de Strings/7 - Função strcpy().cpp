#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h> // para o funcionamento da fun��o strcpy();

/* Estrutura de Dados e Algoritmos I
Fun��o strcpy()
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[100], str2[100], str3[100];
	printf("  Entre com uma string: ");
	gets(str1);	
	strcpy(str2,str1);  // a fun��o strcpy() copia a string-origem para a string-destino.
	strcpy(str3, "Voc� digitou a string: ");  // copiou a string entre "aspas duplas" para a variavel str3.
	printf("\n  %s %s\n",str3,str2);
	system("Pause");
	return 0;
}

/**/
