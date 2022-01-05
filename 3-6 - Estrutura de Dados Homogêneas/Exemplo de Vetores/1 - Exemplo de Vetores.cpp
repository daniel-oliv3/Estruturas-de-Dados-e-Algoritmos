#include<stdio.h> //biblioteca de comandos de entrada e saida
#include<stdlib.h>  
#include<locale.h>
#include<conio.h> // biblioteca do comando getch


/* ;*/

int main() //função principal que inicia a execução
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n[8]; // n é o nome do array com 8 elementos inteiros 
	int i; // a variavel i e uma contadora
	//preenchendo o array
	for(i=0; i<8; i++){ // laço de repetição usada para percorrer o array
		n[i]=i+3; // define o elemento de cada posição do array
	} // fim do laço for
	
	printf("  %s%7s \n","Elemento","valor");
	//imprimindo o array
	for(i=0; i<8; i++){ // laço de repetição paea percorrer o array
		printf("  n[%d]=%7d \n",i,n[i]); // mostra o valor de cada posição
	} //fim do laço for
	// getch(); comando para pausar a execução e aguardar uma tecla
	system("Pause");
	return 0;
}

/**/
