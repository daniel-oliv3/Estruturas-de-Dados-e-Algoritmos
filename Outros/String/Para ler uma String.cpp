#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char re[8];
	printf("  Digite o seu nome: ");
	scanf("%s",&re);
	printf("  Oi %s\n",re);
	system("Pause");
	return 0;
}

/**/
