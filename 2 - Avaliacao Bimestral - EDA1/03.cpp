#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3. [2,5] Fa�a um programa utilizando um ponteiro para imprimir, do �ltimo para o primeiro, cada um dos elementos do vetor VET[10]={1,2,3,4,5,6,7,8,9,0}. 
E depois fa�a tamb�m a impress�o do primeiro para o �ltimo, tamb�m usando ponteiro. S�o duas impress�es que devem ser feitas, e devem seguir a ordem solicitada no enunciado. 
O ponteiro deve percorrer o vetor utilizando aritm�tica de ponteiro (Endere�o_base + deslocamento ou (p++) ou (p+i) ou (p--) ou (p-i) ). 
Sen�o utilizar uma dessas op��es a quest�o est� incorreta.;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, *pt, vet[10]={1,2,3,4,5,6,7,8,9,0};
	pt=vet;
	printf("\nDo primeiro para o �ltimo!\n");
	for(i=0; i<10; i++){
		printf("  %i\n",*pt);
		pt++;
	}
	printf("\nDo �ltimo para o primeiro!\n");
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
