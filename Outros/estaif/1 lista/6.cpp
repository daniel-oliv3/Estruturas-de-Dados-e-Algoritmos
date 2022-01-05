#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t 8

int main()
{
    setlocale(LC_ALL,"ptb");
	int i,j;
	long int  vet1[t],vet2[t],fat=1;
	srand(time(NULL));
	
	printf("\nVet A\n");

	for(i=0;i<t;i++){
		vet1[i]=1+rand()%10;
		printf("%d, ",vet1[i]);
	}
	
	
	printf("\nVet novo com seu seu respectivo fatorial\n\n");
	
	for(i=0;i<t;i++){
		
		for(j=1;j<=vet1[i];j++){
			fat*=j;
		}	
		vet2[i]=fat;
		printf("%d, ",vet2[i]);
		fat=1;
	}
	
		

	printf("\n\n");
	system("pause");
	exit(1);

}






