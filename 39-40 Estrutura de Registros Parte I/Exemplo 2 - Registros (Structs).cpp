#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Exemplo 2 - Registros (Structs);*/

struct ficha{ // definindo uma struct tipo funcionario.
	int cod;
	char nome[50];
	char telefone[10];
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct ficha aluno, func;
	printf("  Código do aluno: ");
	scanf("%d",&aluno.cod);
	printf("  Nome do aluno: ");
	scanf("%s",&aluno.nome);
	printf("  Telefone do aluno: ");
	scanf("%s",&aluno.telefone);
	//printf("\n+----------------------+\n");
	printf("  Código do funcionário: ");
	scanf("%d",&func.cod);
	printf("  Nome do funcionário: ");
	scanf("%s",&func.nome);
	printf("  Telefone do funcionário: ");
	scanf("%s",&func.telefone);
	 
	if(aluno.cod == func.cod){
		printf("\n  Aluno e Funcionário são a mesma pessoa\n");
	}else{
		printf("\n  Aluno e Funcionário são pessoa diferentes!\n\a");
	}
	system("Pause");
	return 0;
}

/**/
