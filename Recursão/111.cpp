#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* ;*/

int soma(int n){
	if(n==1)
		return 1;
	else
		return n+soma(n-1);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	printf("  Entre com um n�mero: ");
	scanf("%d",&num);
	if(num>0){
		printf("  A somat�ria do n�mero: %d\n",soma(num));
	}
	getch();
	return 0;
}

