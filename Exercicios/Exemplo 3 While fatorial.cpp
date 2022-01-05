#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Programa que calcula o fatorial de um número;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int contador, n;
	long int fatorial=1;
	contador=1;
	printf("\n Programa FATORIAL \n");
	printf("  Digite um número: ");
	scanf("%d",&n);
	while(contador <= n){
		fatorial=fatorial*contador;
		contador=contador+1;
	}
	printf("\n   O fatorial de %d equivale a: %d\n",n,fatorial);
	system("Pause");
	return 0;
}

/**/
