#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* Estrutura de Dados e Algoritmos I
Strings 2;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str[6]="Teste";
	printf("  Palavra: %s\n",str);
	str[0]='L';
	printf("\n  Nova palavra: %s\n",str);
	getch();
	//system("Pause");
	return 0;
}

/**/
