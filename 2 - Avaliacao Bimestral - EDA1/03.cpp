#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3. [2,5] Faça um programa utilizando um ponteiro para imprimir, do último para o primeiro, cada um dos elementos do vetor VET[10]={1,2,3,4,5,6,7,8,9,0}. 
E depois faça também a impressão do primeiro para o último, também usando ponteiro. São duas impressões que devem ser feitas, e devem seguir a ordem solicitada no enunciado. 
O ponteiro deve percorrer o vetor utilizando aritmética de ponteiro (Endereço_base + deslocamento ou (p++) ou (p+i) ou (p--) ou (p-i) ). 
Senão utilizar uma dessas opções a questão está incorreta.;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, *pt, vet[10]={1,2,3,4,5,6,7,8,9,0};
	pt=vet;
	printf("\nDo primeiro para o último!\n");
	for(i=0; i<10; i++){
		printf("  %i\n",*pt);
		pt++;
	}
	printf("\nDo último para o primeiro!\n");
	for(i=9; i>=0; i--){
		printf("  %i\n",*(--pt));
	}
	printf("\n");
	system("Pause");
	return 0;
}

/*
FACULDADE FUCAPI
ALUNO: DANIEL OLIVEIRA DE SOUZA
TURNO: NOTURNO 
*/
