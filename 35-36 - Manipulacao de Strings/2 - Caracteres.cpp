#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* Estrutura de Dados e Algoritmos I
Caracteres;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch;
	ch=getchar();
	printf("  Você pressionou a tecla %c\n",ch); // %c imprime o caracter informado
	getch();
	
	system("Pause");
	return 0;
}

/* getch() apenas retorna o caractere pressionado sem
imprimi-lo na tela
*/
