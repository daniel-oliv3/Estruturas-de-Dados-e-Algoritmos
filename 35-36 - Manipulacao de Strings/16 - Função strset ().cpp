#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Fun��o strset ();

Substitui todos os caracteres da string pelo mesmo
caractere usado na fun��o strset( )
USO:
strset(string,char);
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("  Entre com a string: ");
	scanf("%s",&string);
	printf("  Substituindo: %s\n",strset(string, '*'));
	system("Pause");
	return 0;
}

/**/
