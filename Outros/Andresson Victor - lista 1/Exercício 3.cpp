#include<conio.h>
#include<stdio.h>
#define tam 20
int main(){
	float A[tam],B[tam];
	int i,j;
	
	for(i=0;i<tam;i++){
		printf("\ninforme o valor de A: ");
		scanf("%f",&A[i]);
	}
	for(i=0;i<tam;i++){
			B[tam-1-i]=A[i];
	
	}
	printf("valor do vetor B: ");
	for(i=0;i<tam;i++){
		printf("%.1f ",B[i]);
	}
	
	
	
getch();
return 0;
}
