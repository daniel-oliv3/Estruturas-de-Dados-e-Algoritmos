#include<stdio.h> //biblioteca de comandos de entrada e saida
#include<stdlib.h>  
#include<locale.h>
#include<conio.h> // biblioteca do comando getch


/* ;*/

int main() //fun��o principal que inicia a execu��o
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n[8]; // n � o nome do array com 8 elementos inteiros 
	int i; // a variavel i e uma contadora
	//preenchendo o array
	for(i=0; i<8; i++){ // la�o de repeti��o usada para percorrer o array
		n[i]=i+3; // define o elemento de cada posi��o do array
	} // fim do la�o for
	
	printf("  %s%7s \n","Elemento","valor");
	//imprimindo o array
	for(i=0; i<8; i++){ // la�o de repeti��o paea percorrer o array
		printf("  n[%d]=%7d \n",i,n[i]); // mostra o valor de cada posi��o
	} //fim do la�o for
	// getch(); comando para pausar a execu��o e aguardar uma tecla
	system("Pause");
	return 0;
}

/**/
