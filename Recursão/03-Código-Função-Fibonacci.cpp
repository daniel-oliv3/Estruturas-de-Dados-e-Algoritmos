#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Código - Série Fibonacci;*/

int fibo(int n){
	if(n==0 || n==1)  //condição de parada
		return n;
		else
			return fibo(n-1)+fibo(n-2);	// duas chamadas a si mesma
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	printf("  Entre com um número: ");
	scanf("%d",&num);
	if(num>0){
		printf("  A soma da série é: %d\n",fibo(num));  //chamada da função.
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
