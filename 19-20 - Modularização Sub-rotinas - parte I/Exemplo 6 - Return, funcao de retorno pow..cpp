#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* ;*/

float potencia(int b, int e){
	return pow(b, e);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int base, exp;
	printf("  Digite a base: ");
	scanf("%d",&base);
	printf("  Digite o expoente: ");
	scanf("%d",&exp);
	printf("  O resultado da potencia é: %.2f\n",potencia(base,exp));
	system("pause");
	return 0;
}

/**/
