#include<stdio.h>
#include<stdlib.h>
#include<conio.h>  // comando getch()
#include<locale.h>

/* EXEMPLOS DE VETORES ;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n[8]; // n � o nome do array com 8 elementos
	int i; // a variavel i e uma contadora
	for(i=0; i<8; i++){  // preenchendo o array
		n[i]=i+3;  // define o elemento de cada posi��o no array
	}
	printf("%s%7s \n","Elemento", "Valor");
	for(i=0; i<8; i++){  // imprimindo o array
		printf(" n[%d]=%7d \n",i,n[i]);  // la�o de repeti��o usado para percorre o array
	}
	getch(); //comando para pausar a execu��o e guardar uma tecla
	return 0;  // indice conclus�o do programa e retorna da fun��o main
}

/**/
