#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Estrutura de Dados e Algoritmos I
Função strcat()
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[100], str2[100];
	printf("  Entre com seu nome: ");
	gets(str1);
	strcpy(str2, "Bom dia!, ");
	strcat(str2, str1);
	printf("\n  %s\n",str2);
	system("Pause");
	return 0;
}

/*A string de origem permanecerá inalterada e será
anexada ao fim da string de destino.
Basicamente, essa operação consiste em copiar
uma string para o final de outra string.
Uso:
strcat (string_destino, string_origem);
*/
