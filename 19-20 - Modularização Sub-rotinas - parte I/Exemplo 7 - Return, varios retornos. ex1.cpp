#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* exemplo 1;*/

int maior(int x, int y){
	if(x>y)
		return x;
	else
		return y;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b;
	printf("  Digite o valor de A: ");
	scanf("%d",&a);
	printf("  Digite o valor de B: ");
	scanf("%d",&b);
	printf("  O maior é: %d\n",maior(a,b));
	system("Pause");
	return 0;
}

/**/
