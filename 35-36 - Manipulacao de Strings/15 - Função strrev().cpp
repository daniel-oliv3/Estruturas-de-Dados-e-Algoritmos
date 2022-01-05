#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Função strrev();

Inverte uma string dada
USO:

strrev(string);

;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("  Entre com uma string: ");
	scanf("%s",&string);
	printf("  Invertendo: %s\n",strrev(string));
	system("Pause");
	return 0;
}

/**/
