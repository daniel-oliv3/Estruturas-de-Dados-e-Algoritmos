#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 5

int main()
{
    setlocale(LC_ALL,"ptb");
	srand(time(NULL));
	
	int a[t],b[t],s=0,i,j,n;
	
	printf("\n\nVet A\n\n");

	for(i=0;i<t;i++){
		do{
			printf("Informe um valor[%d]",i);
			scanf("%d",&n);
		}while(n<0);
		a[i]=n;
			
	}
	
	for(i=0;i<t;i++){
		printf("%d, ",a[i]);		
	}
	
	printf("\n\nVet B com o seu somatorio\n\n");

	for(i=0;i<t;i++){
		
		for(j=1;j<=a[i];j++){
			s+=j;
		}
		
		b[i]=s;
		s=0;
		printf("%d, ",b[i]);		
	}
	

	printf("\n\n");
	system("pause");
	exit(1);

}






