#include<conio.h>
#include<stdio.h>
#define tam 8
int main(){
	int i,j,vetor[tam],fat,arm[tam];
	for(i=0;i<tam;i++){
		do{
			printf("\ninforme o %d%c valor: ",i+1,167);
			scanf("%d",&vetor[i]);
		}while(vetor[i]<0);
	}
	for(i=0;i<tam;i++){
		fat=vetor[i];
		for(j=1;j<vetor[i];j++){
			fat=fat*j;
		}
	arm[i]=fat;
	}
printf("\nvalores informados: ");
for(i=0;i<tam;i++){
	printf("%d ",vetor[i]);
}
printf("\nfatorial de cada valor: ");
for(i=0;i<tam;i++){
	printf("%d ",arm[i]);
}
printf("\n");
getch();
return 0;	
}
