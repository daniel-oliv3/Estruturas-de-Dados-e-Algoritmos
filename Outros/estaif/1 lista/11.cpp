#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 10

int main()
{
    setlocale(LC_ALL,"ptb");
	
	int vet[t],i,j,exi,cont,x=0,p[t];
	
	srand(time(NULL));
	
	printf("\n\n");
	for(i=0;i<t;i++){
		vet[i]=rand()%10;
		printf("%d, ",vet[i]);
	}
	
	for(i=0;i<t;i++){
		cont=0;
		for(j=0;j<t;j++){
			if(vet[i]==vet[j]){
				cont++;
			}
		}
		if(cont>1){
			exi=0;
			for(int k=0;k<x;k++){
				if(vet[i]==p[k]){
					exi++;
				}
			}
			if(exi==0){
				p[x]=vet[i];
				x++;
				printf("\nO numero %d se repete %d\n",vet[i],cont);
			}
		}
	}

	printf("\n\n");
	system("pause");
	exit(1);

}






