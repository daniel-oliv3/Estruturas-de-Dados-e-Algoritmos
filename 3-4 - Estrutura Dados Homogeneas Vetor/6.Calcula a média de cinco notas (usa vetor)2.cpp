#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#define tam 5

/* 6.Calcula a média de cinco notas (usa vetor);*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float notas[tam], media=0.0;
	int i;
	for(i=0; i<tam; i++){
		printf("  Digite a nota do aluno %d: ",i+1);
		scanf("%f",&notas[i]);
		media+=notas[i];
	}
	media/=5.0;
	printf("  Média das Notas: %.2f\n",media);
	getch();
	return 0;
}

/**/
