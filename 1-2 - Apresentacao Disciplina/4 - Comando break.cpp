#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Comando break ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b;
	printf("  Digite o valor de A: ");
	scanf("%d",&a);
	printf("  Digite o valor de B: ");
	scanf("%d",&b);
	while(a<=b){
		a=a+1;
		if(a==5){
			break;
		}
		printf("%d \n",a);
	}
	system("Pause");
	return 0;
}

/**/
