#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 10

int main(){
	srand(time(NULL));
	int vt[tam];
	float nv[tam];
	int i,j;
	float maior;
	for(i=0;i<tam;i++){
		vt[i]=rand()%tam;
		printf("%d ",vt[i]);
	}
	maior=vt[0];
	for(i=0;i<tam;i++){
	 if(maior<vt[i])
	    maior=vt[i];
	}
for(i=0;i<tam;i++){
	 nv[i]=vt[i]/maior;
}
printf("\nvalores do primeiro vetor:");
for(i=0;i<tam;i++){
   printf("%d ",vt[i]);
}
printf("\nvalores do vetor resultante:");
for(i=0;i<tam;i++){
   printf("%.2f ",nv[i]);
}
getch();
return 0;
}
