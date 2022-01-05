#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 2. Escreva um programa que receba uma string S e dois
valores inteiros não negativos i e j. Em seguida,
imprimir os caracteres contidos no seguimento
(intervalo) que vai de i a j da string S:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string_s[100];
	int x, n, i, j;
	printf("  Digite uma string: ");
	gets(string_s);
	printf("\n  Informe o intervalo\n"); // indice 0
	printf("  Inicio: ");
	scanf("%d",&i);
	printf("  Fim: ");
	scanf("%d",&j);
	n=strlen(string_s);
	printf("\n  Números de letras e espaços em branco: %d\n");
	for(x=i; x<j; x++){
		printf("  %c\n",string_s[x]);
	} 
	printf("\n");
	system("Pause");
	return 0;
}

/**/
