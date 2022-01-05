#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define tam1 15
#define tam2 12

int main(){
	srand(time(NULL));
	int AL[tam1],ALP[tam2];
	int i;
	for(i=0;i<tam1;i++){
		AL[i]=rand()%100000;
	}
	for(i=0;i<tam2;i++){
		ALP[i]=rand()%100000;
	}
	printf("Turma de lOGICA:\n");
	for(i=0;i<tam1;i++){
		printf("N%d%c matricula:%d\n",i+1,167,AL[i]);
	}
		printf("Turma de LINGUAGEM DE PROGRAMACAO:\n");
	for(i=0;i<tam2;i++){
		printf("N%d%c matricula:%d\n",i+1,167,ALP[i]);
	}
	
	
getch();
return 0;
}
