#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ESTRUTURA DE DADOS E ALGORITMO 1;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char re[8]="lagarto"; // tamanho maximo de 7 caracteres
	printf("  %s\n",re);
	system("Pause");
	return 0;
}

/* 

* N�o existe um tipo de String em c.
* Strings em c s�o vetores do tipo char que terminam com '\0'
* Para literais string, o proprio compilador colocar o \0;

*/
