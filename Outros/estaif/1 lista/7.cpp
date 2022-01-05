#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t 4

int main()
{
    setlocale(LC_ALL,"ptb");
	
	int  vet[t],i,j,x=t,aux[t];
	
	srand(time(NULL));
	
	printf("\nVet A\n");

	for(i=0;i<t;i++){
		vet[i]=1+rand()%10;
		printf("%d, ",vet[i]);
	}

	for(i=0;i<t;i++){
		x--;
		aux[x]=vet[i];
	}
	
	printf("\nVet Mudadado\n");
	
	for(i=0;i<t;i++){
		vet[i]=aux[i];
		printf("%d, ",aux[i]);
	}
		
	printf("\n\n");
	system("pause");
	exit(1);

}






