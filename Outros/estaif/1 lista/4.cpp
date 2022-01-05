#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define t1 2
#define t2 4
int main()
{
    setlocale(LC_ALL,"ptb");
	
	int  vet1[t1],vet2[t2],exi;
	int i,j;
	srand(time(NULL));

	printf("\nVet A\n");

	for(i=0;i<t1;i++){
		vet1[i]=rand()%10;
		printf("%d, ",vet1[i]);
	}
	
	printf("\n\nVet B\n");
	
	for(i=0;i<t2;i++){
		vet2[i]=rand()%10;
		printf("%d, ",vet2[i]);
	}
	printf("\n\n");
	for(i=0;i<t1;i++){
		
		exi=0;
		
		for(j=0;j<t2;j++){
			
			if(!vet1[i]==vet2[j]){
				exi=1;
			}		
		
		}
		
		if(exi==1){
			printf("O elemento %d que só faz parte de um array\n",vet1[i]);
		}		
	
	}	



	printf("\n\n");
	system("pause");
	exit(1);

}






