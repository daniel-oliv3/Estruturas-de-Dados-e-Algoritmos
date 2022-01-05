#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//strlen - vai ler o tamanho da string incluindo os espaços em branco.
//A função strlen(); retorna o comprimento da string fornecida;
//O terminador nulo não e contado
//strlen(string);
//retorna o tamanho da string, "numeros de caracter"

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int tam;
	char str[100];
	printf("  Entre com uma frase: ");
	gets(str);
	tam=strlen(str); //buscar o tamanho da string, tam retorna uma valor INTEIRO.
	printf("\n  A frase que você digitou tem tamanho %d\n",tam);
	system("Pause");
	return 0;
}

