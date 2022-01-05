#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* typedef - Registros (Structs);*/

typedef struct Dados{
	int RA;
	double nota;
}Aluno;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	Aluno turma[5];
	double media;
	for(int i=0; i<5; i++){
		printf("\nInforme dados do %dº Aluno\n",i+1);
		printf("Digite o RA do aluno: ");
		scanf("%d",&turma[i].RA);
		printf("Digite a média do aluno: ");
		scanf("%f",&turma[i].nota);
	}
	media=0.0;
	for(int i=0; i<5; i++){
		media=media+turma[i].nota;
	}	
	media=media/5.0;
	printf("\nA média da turma é: %.2f\n",media);
	system("Pause");
	return 0;
}

/**/
