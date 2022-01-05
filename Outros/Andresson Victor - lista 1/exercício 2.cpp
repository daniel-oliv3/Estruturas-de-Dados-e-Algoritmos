//precisa reparar nos valores iguais
#include<conio.h>
#include<stdio.h>
#define tam 3
int main(){
int i,j,vetor[tam],nr[tam];

for(i=0;i<tam;i++){
	printf("\ninforme o valor:");
	scanf("%d",&vetor[i]);
}
for(i=0;i<tam;i++){
	for(j=0;j<i+1;j++){
		if(i!=j){
			if(vetor[i]==vetor[j]){
				nr[i]=vetor[j];
			}
	    }
	}
}
for(i=0;i<tam;i++){
	for(j=0;j<i+1;j++){
		if(nr[i]==nr[j])
		continue;
		else
		printf("%d ",nr[i]);
	}
}



getch();
return 0;
}
