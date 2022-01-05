#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];
	printf("  Digite uma string: ");
	fgets(string, 10, stdin);
	printf("  Você digitou: %s\n",string);
	system("Pause");
	return 0;
}

/**/
