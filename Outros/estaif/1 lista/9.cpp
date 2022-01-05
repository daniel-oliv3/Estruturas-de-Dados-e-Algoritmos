#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 5

int main()
{
    setlocale(LC_ALL,"ptb");
	srand(time(NULL));
	
	int a[t],b[t],c[t],i;
	
	printf("\n\nVet A\n\n");

	for(i=0;i<t;i++){
		a[i]=rand()%10;
		printf("%d, ",a[i]);		
	}
	
	printf("\n\nVet B\n\n");

	for(i=0;i<t;i++){
		b[i]=rand()%5;
		printf("%d, ",b[i]);		
	}
	
	printf("\n\nVet c\n\n");

	for(i=0;i<t;i++){
		c[i]=pow((a[i]+b[i]),2);
		printf("%d, ",c[i]);		
	}

	printf("\n\n");
	system("pause");
	exit(1);

}






