#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

void imprime(int n){
	int i;
	for(i=1; i<=n; i++)
		printf("  Linha %d\n",i);
	}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	imprime(5);
	system("Pause");
	return 0;
}

/**/
