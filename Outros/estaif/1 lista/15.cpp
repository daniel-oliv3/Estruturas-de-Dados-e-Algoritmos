#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 15
int main()
{
    setlocale(LC_ALL,"ptb");
	
	int i,j;
	float vet[t],maior,res[t];
	
	printf("\n\nArray 1\n\n");	
	
	for(i=0;i<t;i++){
		vet[i]=rand()%20;
		printf("%.2f, ",vet[i]);	
	}
	maior=vet[0];
	for(i=0;i<t;i++){
		if(vet[i]>maior){
			maior=vet[i];
		}	
	}
	printf("\n\nArray Resultante\n\n");	
	for(i=0;i<t;i++){
		res[i]=vet[i]/maior;
		printf("%.2f, ",res[i]);
	}
	

	printf("\n\n");
	system("pause");
	exit(1);

}






