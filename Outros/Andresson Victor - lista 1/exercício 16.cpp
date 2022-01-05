#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 
#include<time.h>
#define tam 8
int main(){
	srand(time(NULL));
	int codigo[tam];
	int dvd[tam],i,qtde[tam];
	
	printf("Codigo do cliente:\n");
	for(i=0;i<tam;i++){
	   codigo[i]=rand()%100000;
	   printf("%d\n",codigo[i]);
	}
	
	printf("dvds:\n");
	for(i=0;i<tam;i++){
	   scanf("%d",&dvd[i]); 
    }
    
	for(i=0;i<tam;i++){
		qtde[i]=0;
		if(dvd[i]>=7){
			qtde[i]=1;
		}
	}
	 	
	for(i=0;i<tam;i++){
		printf("\nCodigo do cliente: %d Quantidade Gratis: %d",codigo[i],qtde[i]);
	}  
getch();
return 0;
}
