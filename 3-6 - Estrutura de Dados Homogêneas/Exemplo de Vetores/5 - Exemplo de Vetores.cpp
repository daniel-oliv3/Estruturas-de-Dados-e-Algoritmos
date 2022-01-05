#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Calcular a média de notas (usar vetor);*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int notas[5];
	int i;
	float media=0.0;
	for(i=0; i<5; i++){
		printf("  Digite a nota do aluno %d: ",i+1);
		scanf("%d",&notas[i]);
		media+=notas[i];
	}
	media=media/5.0;
	printf("  Média das notas: %.2f\n",media);
	system("Pause");
	return 0;
}

/**/
