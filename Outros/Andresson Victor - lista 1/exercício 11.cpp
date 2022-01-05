#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main(){
	int A[tam];
	int i, j, cont;
	
	for(i=0; i<tam; i++){
		printf("Informe os valores: ");
		scanf("%d", &A[i]);
	}
	for(i=0; i<tam; i++){
		cont=0;
		for(j=0; j<tam; j++){
		      if(i!=j){
		      	if(A[i]==A[j]){
		      		cont++;
				  }
			  }
		}
		if(cont!=0)
		printf("\nnumero %d repetido: %d",A[i],cont);
	}
	
	
	system("pause");
	return 0;
}
