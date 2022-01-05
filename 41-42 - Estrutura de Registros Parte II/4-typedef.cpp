#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* typedef
;*/

typedef int inteiro;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x = 10;
	inteiro y = 20; //
	y=y+x;
	printf("\nSoma = %d\n",y);	
	system("Pause");
	return 0;
}

/**/
