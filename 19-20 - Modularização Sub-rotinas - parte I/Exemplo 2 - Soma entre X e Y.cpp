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
	printf("  Digite um n�mero para A: ");
	scanf("%d",&a);
	printf("  Digite um n�mero para B: ");
	scanf("%d",&b);
	soma=calculoSoma(a,b);
	printf("  A soma �: %d\n",soma);
	system("Pause");
	return 0;
}

/**/
