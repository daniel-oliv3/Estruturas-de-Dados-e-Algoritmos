#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t 10
int main()
{
    setlocale(LC_ALL,"ptb");
	
	int  vet1[t],vet2[t],exi,x=t;
	int i,j;
	srand(time(NULL));

	printf("\nVet A\n");

	for(i=0;i<t;i++){
		vet1[i]=rand()%10;
		printf("%d, ",vet1[i]);
		x--;
		vet2[x]=vet1[i];
	}

	
	printf("\n\n");
	printf("\nVet B\n");

	for(i=0;i<t;i++){
		printf("%d, ",vet2[i]);
	}
	
		


	printf("\n\n");
	system("pause");
	exit(1);

}






