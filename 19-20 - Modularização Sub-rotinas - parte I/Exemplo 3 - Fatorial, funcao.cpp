#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/
int fatorial(int n){
	int i,f=1;
	for(i=1; i<=n; i++){  // corpo da fun�ao main() com uso de sub-rotinas. 
		f=f*i;
	}
	return f;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x, fat;
	printf("  Digite um n�mero inteiro positivo: ");
	scanf("%d",&x);
	fat=fatorial(x);
	printf("  O fatorial de %d �: %d\n",x,fat);
	system("Pause");
	return 0;
}

/**/
