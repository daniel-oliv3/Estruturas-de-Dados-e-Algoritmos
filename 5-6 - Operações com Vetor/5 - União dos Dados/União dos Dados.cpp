#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, vetA[10], vetB[10], vetR[20];
	printf("  Digite 10 números para cada Vetor\n");
	printf("  Vetor A\n");
	for(i=0; i<10; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vetA[i]);
	}
	system("cls");
	printf("  Vetor B\n");
	for(j=0; j<10; j++){
		printf("  Digite o %dº número: ",j+1);
		scanf("%d",&vetB[j]);
	}
	for(i=0; i<10; i++){  //  preenchimento do vetor
		vetR[i]=vetA[i];
	}
	for(j=0; j<20; j++){
		vetR[j]=vetA[j];
	}
	for(i=0; i<20; i++){
		printf("  %d\n",vetR[i]);
	}
	system("Pause");
	return 0;
}

/**/
