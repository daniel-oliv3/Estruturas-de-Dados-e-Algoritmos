#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* C�digo - S�rie Fibonacci;*/

int fibo(int n){
	if(n==0 || n==1)  //condi��o de parada
		return n;
		else
			return fibo(n-1)+fibo(n-2);	// duas chamadas a si mesma
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	printf("  Entre com um n�mero: ");
	scanf("%d",&num);
	if(num>0){
		printf("  A soma da s�rie �: %d\n",fibo(num));  //chamada da fun��o.
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
