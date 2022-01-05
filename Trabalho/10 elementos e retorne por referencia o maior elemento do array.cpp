#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva uma função que receba uma array de 10 elementos e retorne por referencia o maior elemento do array;*/

int manipula_array(int vet[]){
	int soma=0;
	for(int i=0; i=5; i++){
		soma+=vet[i];
	}
	return soma;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vet[5]={1,2,3,4,5};
	int soma = manipala_array(vet);
	printf("  O resultado da soma: %d",soma);
	
	system("Pause");
	return 0;
}

/**/
