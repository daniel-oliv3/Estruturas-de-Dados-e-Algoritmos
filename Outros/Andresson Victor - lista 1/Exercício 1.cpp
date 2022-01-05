#include<conio.h>
#include<stdio.h>
#define tam 10
int main(){
	float vetor[tam],nm;
	int i,j;
	for( i=0;i<tam;i++){
		printf("\ninforme o valor:");
		scanf("%f",&vetor[i]);
	}
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(vetor[i]<vetor[j]){
		    nm=vetor[i];
		    vetor[i]=vetor[j];
		    vetor[j]=nm;
		   }
		}
	}
	for(i=0;i<tam;i++){
		printf("%.2f \n",vetor[i]);
	}
	
	
	getch();
	return 0;
}
