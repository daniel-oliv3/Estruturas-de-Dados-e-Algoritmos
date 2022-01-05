#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* Código - Função Somatoria;*/

int soma(int n){
	if(n==1)  // condição de parada
		return 1;
	else
		return n+soma(n-1); // Chamada a si mesma.
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	printf("  Entre com um número: ");
	scanf("%d",&num);
	if(num>0){
		printf("  A somatória do número: %d\n",soma(num));  // chamada da função
	}
	getch();
	return 0;
}

