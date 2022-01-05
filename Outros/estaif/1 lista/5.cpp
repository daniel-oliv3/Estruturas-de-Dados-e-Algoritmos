#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t 8

int main()
{
    setlocale(LC_ALL,"ptb");
	
	int  vet1[t],vet2[t],x,y,s=0;
	int i;
	srand(time(NULL));
	
	printf("Informe um valor para x e y\n");
	scanf("%d%d",&x,&y);
	
	printf("\nVet A\n");

	for(i=0;i<t;i++){
		vet1[i]=rand()%10;
		printf("%d, ",vet1[i]);
	}
	
	printf("\n\nVet B\n");
	
	for(i=0;i<t;i++){
		vet2[i]=rand()%10;
		printf("%d, ",vet2[i]);
	}


	printf("A soma das posições x e y é %d\n",vet1[x]+vet2[y]);
	

	printf("\n\n");
	system("pause");
	exit(1);

}






