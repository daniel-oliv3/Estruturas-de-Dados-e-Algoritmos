#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#define TAM 5 // vai de zero a 4.

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float notas[TAM], media=0.0;
	int i;
	for(i=0; i<TAM; i++){
		printf("  Digite a nota do %d aluno: ",i+1);
		scanf("%f",&notas[i]);
		media+=notas[i];
	}
	media/= 5.0;
	printf("\n  	M�dia das Notas: %.2f\n",media);
	system("Pause");
	return 0;
}

/**/
