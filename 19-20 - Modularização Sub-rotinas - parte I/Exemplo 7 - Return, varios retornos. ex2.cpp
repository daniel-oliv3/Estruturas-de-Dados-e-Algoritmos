#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* exemplo 2;*/

int maior(int x, int y){
	int z;
	if(x>y)
		z = x;
	else
		z = y;
	return z;		
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
	printf("  O maior �: %d\n",maior(a,b));
	system("Pause");
	return 0;
}

/**/
