#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Fun��o strlen();*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int tam;  
	char str[100];
	printf("  Entre com uma frase: ");
	gets(str);
	tam=strlen(str);
	printf("  A frase que voc� digitou tem %d caracteres\n",tam);
	system("Pause");
	return 0;
}

/**/
