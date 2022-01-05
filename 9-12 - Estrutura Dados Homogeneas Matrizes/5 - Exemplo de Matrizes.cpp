#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Programa que lê os elementos de uma matriz 2x4
controle de 3 notas de 2 alunos com cálculo e armazenamento da media;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float notas[2][4], total;
	for(int a=0; a<2; a++){  // Entrada das notas 
		printf("\n  Informe as notas do %d aluno: \n",a+1);
		total=0;
		for(int nt=0; nt<3; nt++){
			printf("  Digite a %dº nota: ",nt+1);
			scanf("%f",&notas[a][nt]);
			total+=notas[a][nt];
		}
		notas[a][3]=total/3;
	}
	printf("\n\n");
	for(int a=0; a<2; a++){
		printf("\n  Notas do %d aluno: \n",a+1);
		for(int nt=0; nt<4; nt++){
			if(nt<3){
				printf("  %d nota: %.2f\n",nt+1,notas[a][nt]);
			}else{
				printf("  Média: %.2f\n",notas[a][nt]);
			}
		}
	}
	system("Pause");
	return 0;
}

/**/
