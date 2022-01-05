#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* usando vetores: salário mensal - 12 meses;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sal_mes[12];
	int i;
	for(i=0; i<12; i++){  //inicializando o vetor
		sal_mes[i]=0;
	}
	for(i=0; i<12; i++){ // entrada de dados
		printf("  Informe o valor do %d%c salario: R$ ",i+i,167);
		scanf("%f",&sal_mes[i]);		
	}
	system("pause");
	for(i=0; i<12; i++){  // saida de dados
		printf("\n  %do mes equivale a: R$ %.2f\n",i+1,sal_mes[i]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
