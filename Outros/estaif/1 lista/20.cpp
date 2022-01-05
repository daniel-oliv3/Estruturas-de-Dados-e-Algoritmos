#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 6

int main()
{
    setlocale(LC_ALL,"ptb");
	
	int vet[t],i,x[5];
	
	for(i=0;i<t;i++){
		vet[i]=1+rand()%5;
		printf("%d, ",vet[i]);
		if(vet[i]==1){
			x[i]++;
		}if(vet[i]==2){
			x[i]++;
		}if(vet[i]==3){
			x[i]++;
		}if(vet[i]==4){
			x[i]++;
		}if(vet[i]==5){
			x[i]++;
		}if(vet[i]==6){
			x[i]++;
		}
	}
	printf("\n\n");
	printf("\n\n");
	for(i=0;i<6;i++){
		printf("O número %d com frequencia\n\n",x[i]);
	}		

	printf("\n\n");
	system("pause");
	exit(1);

}






