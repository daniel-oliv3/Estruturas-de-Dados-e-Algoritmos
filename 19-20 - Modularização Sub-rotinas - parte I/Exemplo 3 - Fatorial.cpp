#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x, i, f=1;
	printf("  Digite um número inteiro positivo: ");
	scanf("%d",&x);
	for(i=1; i<=x; i++){
		f=f*i;
	}
	printf("  O fatorial de %d é: %d\n",x,f);
	system("Pause");
	return 0;
}

/**/
