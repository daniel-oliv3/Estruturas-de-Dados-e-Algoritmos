#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Estrutura de Dados e Algoritmos I
Strings;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];
	printf("  Digite uma string: ");
	fgets(string,10,stdin);
	printf("\n  Voc� digitou: %s\n",string);
	system("Pause");
	return 0;
}

/*Recomenda��o:
� Use a sintaxe de fgets(STRING, TAMANHO, STREAM)
� STRING vari�vel onde a String ser� armazenada
� TAMANHO � o tamanho m�ximo da string
� STREAM � de onde os caracteres ser�o lidos, para ler
do teclado o valor padr�o para isto � stdin
*/
