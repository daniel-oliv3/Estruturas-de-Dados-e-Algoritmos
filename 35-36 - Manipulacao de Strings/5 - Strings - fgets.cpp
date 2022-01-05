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
	printf("\n  Você digitou: %s\n",string);
	system("Pause");
	return 0;
}

/*Recomendação:
• Use a sintaxe de fgets(STRING, TAMANHO, STREAM)
– STRING variável onde a String será armazenada
– TAMANHO é o tamanho máximo da string
– STREAM é de onde os caracteres serão lidos, para ler
do teclado o valor padrão para isto é stdin
*/
