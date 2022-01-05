#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

/* usando vetores: salário mensal - 12 meses;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sal_mes[12];
	int i;
	for(i<0; i<12; i++){
		sal_mes[i]=0;
	}
	for(i=0; i<12; i++){
		printf("  Digite o valor do %d salário: R$: ",i+1);
		scanf("%f",&sal_mes[i]);
	}
	system("pause");
	for(i=0; i<12; i++){
		printf("\n  %do mês equivale a: R$: %.2f\n",i+1,sal_mes[i]);
	}
	printf("\n");
	getch();
	return 0;
}

/**/
