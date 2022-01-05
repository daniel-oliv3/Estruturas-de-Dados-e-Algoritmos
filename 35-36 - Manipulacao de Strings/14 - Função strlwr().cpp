#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Função strlwr();*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[20];
	printf("  Entre com a string: ");
	//scanf("%s",&string);
	gets(string);
	printf("  Convertendo: %s\n",strlwr(string));
	printf("\n");
	system("Pause");
	return 0;
}

/**/
