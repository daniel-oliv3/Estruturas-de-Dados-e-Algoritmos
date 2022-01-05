#include<conio.h>
#include<stdio.h>
#define tam 20
int main(){
	int i,j,A[tam],B[tam],acm;
	
	for(i=0;i<tam;i++){
		printf("informe o valor de A:");
		scanf("%d",&A[i]);
	}
	for(i=0;i<tam;i++){
		acm=A[i];
	   for(j=0;j<A[i];j++){
	   	  acm=acm+j;
	    }
	B[i]=acm;	   
    }
printf("\nvalor de B:");
for(i=0;i<tam;i++){
	printf("%d ",B[i]);
}	
getch();
return 0;
}
