#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 8 � Fa�a um programa que leia um vetor VET de 10 posi��es.
Mostre somente os n�meros divis�veis por 2, a sua
quantidade e quantos n�o s�o divis�veis por 2.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, rest, cont1=0, cont2, VET[10];
	printf("\n");
	for(i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&VET[i]);
	}
	system("cls");
	printf("\n\n");
	for(i=0; i<10; i++){
		rest=VET[i]%2;
		if(rest==0){
			printf("  O n�mero %d � Divis�vel por 2\n",VET[i]);
			cont1++;
		}else{
			if(rest!=0){
				cont2++;
			}
		}
	}
	printf("\n\n  A quantidade de n�meros divis�veis por 2 �: %d\n",cont1);
	printf("  A quantidade de n�meros que n�o s�o divis�veis por 2 �: %d\n",cont2);
	system("Pause");
	return 0;
}

/**/
