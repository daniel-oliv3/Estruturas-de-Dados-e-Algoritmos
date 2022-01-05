#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Registros (Structs)
;*/

struct cad_aluno{
	char nome[40];
	float nota[4];
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct cad_aluno Aluno[3];
	int i, j;
	float Nota_Alu;
	printf("+----- Cadastro de Aluno -----+\n");
	for(j=0; j<=2; j++){
		printf("Digite o nome do %dº Aluno: ",j+1);
		fflush(stdin);
		gets(Aluno[j].nome);
		for(i=0; i<=3; i++){
			printf("Digite a %dº Nota: ",i+1);
			fflush(stdin);
			scanf("%f",&Nota_Alu);
			Aluno[j].nota[i]=Nota_Alu;
		}
	}
	system("cls");
	for(j=0; j<=2; j++){
		printf("\nNome: %s\n",Aluno[j].nome);
		for(i=0; i<=3; i++){
			printf("%dº Nota: %5.2f\n",i+1,Aluno[j].nota[i]);
		}
	}
	system("Pause");
	return 0;
}

/**/
