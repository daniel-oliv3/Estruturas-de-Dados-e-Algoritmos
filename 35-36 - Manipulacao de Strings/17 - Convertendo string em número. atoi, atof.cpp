#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Convertendo string em n�mero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str[80];
	int resultado;
	float resultado2;
	scanf("%s",&str);
	resultado=atoi(str);
	printf("  Convers�o: %s-%d\n",str,resultado);
	scanf("%s",&str);
	resultado=atof(str);
	printf("  Convers�o: %s-%f\n",str,resultado2);
	system("Pause");
	return 0;
}

/**/
