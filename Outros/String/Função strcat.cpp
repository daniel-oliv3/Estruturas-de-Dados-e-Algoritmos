#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[100], str2[100];
	printf("  Entre com seu nome: ");
	gets(str1);
	strcpy(str2,"  Bom dia, ");
	strcat(str2,str1); // concatena
	printf("  %s\n",str2);
	system("Pause");
	return 0;
}

/**/
