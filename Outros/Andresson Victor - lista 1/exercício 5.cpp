#include<conio.h>
#include<stdio.h>
#define tam 8
int main(){
	int i,vetor[tam],x,y,soma=0;
	for(i=0;i<tam;i++){
		printf("informe o valor %d: ",i+1);
		scanf("%d",&vetor[i]);
	}
	do{
		printf("valor de X: ");
		scanf("%d",&x);
	}while (x>tam || x<0);
	do{
		printf("valor de y: ");
		scanf("%d",&y);
	}while (y>tam || y<0);
	
soma=vetor[x-1]+vetor[y-1];
printf("soma: %d\n",soma);


getch();
return 0;	
}
