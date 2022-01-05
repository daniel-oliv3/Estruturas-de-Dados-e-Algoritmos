#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch;
	ch=getchar();
	printf("  Você pressionou a tecla %c\n",ch);
	system("Pause");
	return 0;
}

/**/
