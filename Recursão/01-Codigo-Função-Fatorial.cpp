#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* ;*/

int fatorial(int n){
	if(n==0)  // condição de parada;
		return 1;
	else
		return n*fatorial(n-1); // chamada a si mesma;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	printf("  Entre com um número: ");
	scanf("%d",&num);
	if(num>0){
		printf("  O fatorial do número: %d\n",fatorial(num));  // chamada da função:
	}
	system("pause");
	return 0;
}

/**/
