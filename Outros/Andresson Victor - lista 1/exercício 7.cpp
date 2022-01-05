#include<conio.h>
#include<stdio.h>
#define tam 20
int main(){
	int n[tam],arm[tam],i;
	for(i=0;i<tam;i++){
		printf("informe o valor: ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<tam;i++){
		arm[i]=n[tam-1-i];
	}
	for(i=0;i<tam;i++){
		n[i]=arm[i];
	}
printf("\nvalor invertido do mesmo vetor: ");
for(i=0;i<tam;i++){
	printf("%d ",n[i]);
}
	
getch();
return 0;
}
