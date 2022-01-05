#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Convertendo string em número;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str[80];
	int resultado;
	float resultado2;
	scanf("%s",&str);
	resultado=atoi(str);
	printf("  Conversão: %s-%d\n",str,resultado);
	scanf("%s",&str);
	resultado=atof(str);
	printf("  Conversão: %s-%f\n",str,resultado2);
	system("Pause");
	return 0;
}

/**/
