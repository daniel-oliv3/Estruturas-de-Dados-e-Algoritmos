#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Fun��o strcmp();*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str1[100], str2[100];
	printf("  Entre com uma string: ");
	gets(str1);
	printf("  Entre com outra string: ");
	gets(str2);
	if(strcmp(str1,str2)==0){
		printf("  As duas strings s�o iguais.\n");
	}else{
		printf("  As duas strings s�o diferentes.!\n\a");
	}	
	printf("\n");
	system("Pause");
	return 0;
}

/**/
