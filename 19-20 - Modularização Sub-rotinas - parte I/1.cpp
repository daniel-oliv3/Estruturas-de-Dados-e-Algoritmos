#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int square(int a){
	return(a*a);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n1, n2;
	printf("  Entre com um número: ");
	scanf("%d",&n1);
	n2=square(n1);
	printf("  O seu quadrado vale: %d\n",n2);
	system("Pause");
	return 0;
}


/**/
