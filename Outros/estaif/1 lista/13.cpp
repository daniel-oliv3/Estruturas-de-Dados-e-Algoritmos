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
	
	int vet[t],n,j,i,x[t];
	
	
	for(i=0;i<t;i++){
		vet[i]=rand()%20;
		printf("%d, ",vet[i]);	
	}
	
	
	printf("\n\nQual posição voce deseja excluir?\n\n");
	scanf("%d",&n);
	vet[n]=0;
	
	for(i=0,j=0;i<t;i++){
	
		if(vet[i]!=0){
			x[j]=vet[i];
			j++;
		}
	
	}
	
	for(i=0;i<t-2;i++){
		vet[i]=x[i];
		printf("%d, ",vet[i]);
	}
		
	
	 

	printf("\n\n");
	system("pause");
	exit(1);

}






