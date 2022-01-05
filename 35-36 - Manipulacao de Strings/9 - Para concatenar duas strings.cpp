#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Para concatenar duas strings;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[40], str2[10], str3[40]="teste";
	strcpy(str1, "inicio");
	strcpy(str2, "fim");
	strcat(str1,str2);
	strcat(str3,str1);
	printf("%s\n",str1);
	printf("%s\n",str3);
	system("Pause");
	return 0;
}

/**/
