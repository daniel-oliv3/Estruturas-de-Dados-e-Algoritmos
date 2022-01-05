#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 6

int main()
{
    setlocale(LC_ALL,"ptb");
	
	int resp[t]={1,2,3,4,5,6},a[t],b[t],c[t],i,j,ap1=0,ap2=0,ap3=0;
	srand(time(NULL));
	printf("\n\nAps A\n");
	for(i=0;i<t;i++){
		a[i]=rand()%10;
		printf("%d, ",a[i]);
		for(j=0;j<6;j++){
			if(a[i]==resp[j]){
				ap1++;
			}
		}
	}
	printf("\n\nAps C\n");
	for(i=0;i<t;i++){
		b[i]=rand()%10;
		printf("%d, ",b[i]);
		for(j=0;j<6;j++){
			if(b[i]==resp[j]){
				ap2++;
			}
		}
	}
	printf("\n\nAps C\n");
	for(i=0;i<t;i++){
		c[i]=rand()%10;
		printf("%d, ",c[i]);
		for(j=0;j<6;j++){
			if(c[i]==resp[j]){
				ap3++;
			}
		}
	}
	if(!(ap1==0 and ap2==0 and ap3==0)){
		printf("\n\nOBS: 6 p (SENA),5 p (QUINA) e 4 p (QUADRA)\n");
		printf("O Aps 1: %d\nO Aps 2: %d\nO Aps 3: %d\n",ap1,ap2,ap3);
	}

	
	if(ap1==0 and ap2==0 and ap3==0){
		printf("\t\n\n\nOs apostadores ñ fizeram nenhum ponto\n\n");
	}
	
	printf("\n\n\n");
	system("pause");
	exit(1);

}






