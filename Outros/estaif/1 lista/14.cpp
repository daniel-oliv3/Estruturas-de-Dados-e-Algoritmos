#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t1 15
#define t2 12
int main()
{
    setlocale(LC_ALL,"ptb");
	
		
	int log[t1],prog[t2],i,j,exi=0;
	
	printf("\n\nLogica de Programção\n\n");	
	for(i=0;i<t1;i++){
		log[i]=rand()%20;
		printf("%d, ",log[i]);	
	}
	printf("\n\nLinguagem de Programção\n\n");
	for(i=0;i<t2;i++){
		prog[i]=rand()%20;
		printf("%d, ",prog[i]);	
	}
			printf("\n\n");
	for(i=0;i<t1;i++){
		for(j=0;j<t2;j++){
			
			if(log[i]==prog[j]){
				exi++;
				printf("\nO aluno:%d esta em duas materias na materia de Logica de Programação: %d e Linguagem de Programação: %d\n",log[i],i,j);
			}
		}	
	}
	
	if(exi==0){
		printf("Não existe alunos matriculados em duas materias");
	}
	printf("\n\n");
	system("pause");
	exit(1);

}






