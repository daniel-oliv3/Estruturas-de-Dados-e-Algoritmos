#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 10
int main(){
	srand(time(NULL));
	int vt[10];
	int i;
	for(i=0;i<tam;i++){
		vt[i]=rand()%tam;
	}
for(i=0;i<tam;i++){
	printf("%d ",vt[i]);
}
for(i=0;i<tam;i++){
	if(i>=3)
	  vt[i]=vt[i+1];
}
printf("\nvetor:\n");
for(i=0;i<tam-1;i++){
	printf("%d ",vt[i]);
}
getch();
return 0;
}
