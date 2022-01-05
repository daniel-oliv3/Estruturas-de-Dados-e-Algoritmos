#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 4

int main()
{
    setlocale(LC_ALL,"ptb");
		
	int i,j,vet[t],n,exi;
	
	for(i=0;i<t;i++){
		printf("Informe um valor: ");
		scanf("%d",&n);
		exi=0;
		for(j=0;j<i;j++){
		
			if(vet[j]==n){
				exi=1;
			}
		}
		if(exi==0){
			vet[i]=n;
		}	
		else{
			i--;
			printf("Repetiu...\n");
		}
	}
	
		
				scanf("%d",&n);
				vet[i]=n;
	for(i=0;i<t;i++){
		printf("%d, ",vet[i]);
	}
	

	printf("\n\n");
	system("pause");
	exit(1);

}






