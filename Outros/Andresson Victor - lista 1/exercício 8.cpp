#include<conio.h>
#include<stdio.h>
#define tam 10
int main(){
	int n[tam],i,j,nr=0;
	for(i=0;i<tam;i++){
	    do{
		   printf("informe o valor %d: ",i+1);
		   scanf("%d",&n[i]);
			for(j=0;j<i+1;j++){
	   	        if(i!=j){
	   	            if(n[i]==n[j]){
					   printf("informe outro valor!!\n");
					   nr=1;
					}else
					   nr=0;
				}
	        }
	    }while(nr==1);
	}
printf("resultado final do vetor:");
for(i=0;i<tam;i++){
	printf("%d ",n[i]);
}
printf("\n");	
getch();
return 0;	
}
