#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Busca dos Dados
Criar um programa que preencha um vetor de oito elementos
num�ricos, ap�s pe�a para o usu�rio informar um n�mero
qualquer, em seguida verifique se o valor existe e qual sua
posi��o:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, x, vet[8]={5,7,10,15,1,8,29,23};
	printf("\n\n  Digite um n�mero: ");
	scanf("%d",&x);
	for(i=0; i<8; i++){
	if(vet[i]==x){
		printf("  O n�mero: %d est� armazenado no vetor, na posi��o: %d\n",vet[i],i);
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}
