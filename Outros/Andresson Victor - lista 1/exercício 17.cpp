#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define tamA 6
#define tam 10
int main(){
	srand(time(NULL));
	int A[tamA],vt1[tam],vt2[tam],vt3[tam];
	int i,j,cont1=0,cont2=0,cont3=0;
	printf("Numeros da mega senna:");
	for(i=0;i<tamA;i++){
		A[i]=rand()%100;
		printf("%d ",A[i]);
	}
	for(i=0;i<tam;i++){
		vt1[i]=rand()%100;
		printf("\n%d",vt1[i]);
	}
	printf("\n\n");
	for(i=0;i<tam;i++){
		vt2[i]=rand()%100;
		printf("\n%d",vt2[i]);
	}
	printf("\n\n");
	for(i=0;i<tam;i++){
		vt3[i]=rand()%100;
		printf("\n%d",vt3[i]);
	}
	
	for(i=0;i<tamA;i++){
		for(j=0;j<tam;j++){
			if(i!=j){
				if(vt1[j]==A[i])
				  cont1++;
			}
		}
	}
		for(i=0;i<tamA;i++){
		for(j=0;j<tam;j++){
			if(i!=j){
				if(vt2[j]==A[i])
				  cont2++;
			}
		}
	}
		for(i=0;i<tamA;i++){
		for(j=0;j<tam;j++){
			if(i!=j){
				if(vt3[j]==A[i])
				  cont3++;
			}
		}
	}
printf("\nacertos do cliente 1:%d",cont1);
printf("\nacerto do cliente 2:%d",cont2);	
printf("\nacerto do cliente 3: %d",cont3);
	
	
	
getch();
return 0;
}
