#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* LAÇO CONTADO ANINHADO (FOR)

Criar um programa que implemente a tabuada completa de
uma operação matemática do 2 ao 9, semelhante ao exemplo
da figura abaixo:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j;
	printf("\n");
	for(i=2; i<=10; i++){
		printf("  Tabuada do %d \n",i);
		for(j=1; j<=10; j++){
			printf("  %d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
