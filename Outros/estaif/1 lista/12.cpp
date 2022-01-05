#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 1


int main()
{
    setlocale(LC_ALL,"ptb");
	
	float v[t],c[t],x[t];
	int i,p1=0,p2=0,p3=0;
	srand(time(NULL));
	
	printf("\n\n");
	for(i=0;i<t;i++){
		printf("Informe o valor da compra e venda\n");
		scanf("%f%f",&c[i],&v[i]);
	}
	for(i=0;i<t;i++)
	{
		x[i]=((v[i]-c[i])/(v[i]))*100;
	}
	
	for(i=0;i<t;i++){
		
		if(x[i]<10.0){
			p1++;
		}
		else if(x[i]>=10.0 and x[i]<=20.0){
			p2++;
		}
		else if(x[i]>20.0){
			p3++;
		}
	}
	
	if(p1!=0){
		printf("Menor que 10 %% é %d\n",p1);
	}
	if(p2!=0){
		printf("Maior que 10 e menor 20 %% é %d\n",p2);
	}
	if(p3!=0){
		printf("Maior que 20%% é %d\n",p3);
	}
	
	
	printf("\n\n");
	system("pause");
	exit(1);

}






