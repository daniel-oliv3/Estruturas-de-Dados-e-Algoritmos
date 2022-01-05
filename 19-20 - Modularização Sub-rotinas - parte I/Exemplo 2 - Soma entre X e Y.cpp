#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int calculoSoma(int x, int y){
	return x + y;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b, soma;
	printf("  Digite um número para A: ");
	scanf("%d",&a);
	printf("  Digite um número para B: ");
	scanf("%d",&b);
	soma=calculoSoma(a,b);
	printf("  A soma é: %d\n",soma);
	system("Pause");
	return 0;
}

/**/
