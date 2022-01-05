#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

/* Calcula a média  de cinco notas sem usar vetor;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int nota1, nota2, nota3, nota4, nota5;
	float media=0.0;
	printf("  Digite a nota do aluno 1: ");
	scanf("%d",&nota1);
	printf("  Digite a nota do aluno 2: ");
	scanf("%d",&nota2);
	printf("  Digite a nota do aluno 3: ");
	scanf("%d",&nota3);
	printf("  Digite a nota do aluno 4: ");
	scanf("%d",&nota4);
	printf("  Digite a nota do aluno 5: ");
	scanf("%d",&nota5);
	media=(nota1+nota2+nota3+nota4+nota5)/5.0;
	printf("  Média das notas: %.2f\n",media);
	getch();
	return 0;
}

/**/
