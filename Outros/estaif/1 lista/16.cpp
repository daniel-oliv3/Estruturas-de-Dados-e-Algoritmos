#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 8

int main()
{
    setlocale(LC_ALL,"ptb");
	
	int i,quant[t],x[t];
	char nome[t][10];
	
	for(i=0;i<t;i++){
		printf("Informe o seu nome e a quantidade de DVD's alugados [%d]",i);
		scanf("%s%d",&nome[i],&quant[i]);
		x[i]=quant[i]/7;
	}
	for(i=0;i<t;i++){
		printf("O Sr. %s Merece %d em locações gratis.\n",nome[i],x[i]);
	}

	printf("\n\n");
	system("pause");
	exit(1);

}






