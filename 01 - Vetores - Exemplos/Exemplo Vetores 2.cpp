#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sal_mes[12];
	int i;
	
	for(i=0; i<12; i++){
		sal_mes[i]=0;
	}
	for(i=0; i<12; i++){
		printf("  Informe o valor do %dº salario: R$: ",i+1,167);
		scanf("%f", &sal_mes[i]);
	}
	system("pause");
	for(i=0; i<12; i++){
		printf("\n %d O mes equivale a R$: %.2f\n",i+1,sal_mes[i]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
