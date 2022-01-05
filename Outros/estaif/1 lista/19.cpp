
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
# define t 41
/*Um programa de computador insere as notas de 41 alunos em array de números reais. Faça um programa
que indique para o professor da disciplina qual é a nota mediana da turma. A nota mediana é a nota de um
aluno que possui 20 notas maiores ou iguais a ela e mais 20 notas menores ou iguais a ela.*/

int main()
{
    setlocale(LC_ALL,"ptb");

	int i,j;
	float notas[t]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41},aux;
	
	for(i=0;i<t;i++){
		for(j=i+1;j<t;j++){
			
			if(notas[i]>notas[j]){
				aux=notas[i];
				notas[i]=notas[j];
				notas[j]=aux;
			}
		}
	}
	
	printf(" A mediana é %.f\n",notas[(t/2)]);	
	

	exit(1);
}




