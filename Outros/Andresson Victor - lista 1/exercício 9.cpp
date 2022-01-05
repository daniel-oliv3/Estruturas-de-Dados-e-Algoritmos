#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tam 10
int main(){
	
	int A[tam], B[tam];
	int i;
	float C[tam];
	
	for(i=0; i<tam; i++){
		printf("Vetor A:\n");
		scanf("%d", &A[i]);
	}
	for(i=0; i<tam; i++){
		printf("Vetor B:\n");
		scanf("%d", &B[i]);
	}
	for(i=0; i<tam; i++){
		C[i] = pow(A[i]+B[i],2);
	}
	for(i=0; i<tam; i++){
		printf("\n%.2f", C[i]);
	}
	
	system("pause");
	return 0;
}
