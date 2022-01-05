#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t 10
int main()
{
    setlocale(LC_ALL,"ptb");
	
	float vet[t],x;
	int i,j;
	srand(time(NULL));
	
	for(i=0;i<t;i++){
		vet[i]=rand()%10;
		printf("%.f, ",vet[i]);
	}	
	for(i=0;i<t;i++){
		for(j=i+1;j<t;j++){
			if(vet[i]>vet[j]){
				x=vet[i];
				vet[i]=vet[j];
				vet[j]=x;
			}
		}
	}
	printf("\n\nNovo array ordenado\n");
	for(i=0;i<t;i++){
		printf("%.f, ",vet[i]);
	}	
	
	
	

	printf("\n\n");
	system("pause");
	exit(1);

}






