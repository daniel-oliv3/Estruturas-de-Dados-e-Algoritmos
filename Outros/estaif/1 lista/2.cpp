#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t 10
int main()
{
    setlocale(LC_ALL,"ptb");
	
	int  vet[t],cont,exi;
	int i,j;
	srand(time(NULL));
	
	for(i=0;i<t;i++){
		vet[i]=rand()%10;
		printf("%d, ",vet[i]);
	}
		
	for(i=0;i<t;i++){
		exi=0;
		for(j=i+1;j<t;j++){
			if(vet[i]==vet[j]){
				printf("\nO numero %d se repete na posição [%d] [%d] \n",vet[i],i,j);
			}
		}		
	}
	
	

	printf("\n\n");
	system("pause");
	exit(1);

}






