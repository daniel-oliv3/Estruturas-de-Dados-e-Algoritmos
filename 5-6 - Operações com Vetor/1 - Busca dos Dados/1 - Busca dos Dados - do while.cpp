#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Busca dos Dados
Criar um programa que preencha um vetor de oito elementos
numéricos, após peça para o usuário informar um número
qualquer, em seguida verifique se o valor existe e qual sua
posição:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, x, vet[8]={5,7,10,15,1,8,29,23};
	printf("\n\n  Digite um número: ");
	scanf("%d",&x);
	do{
		i++;
	}while(i<8 && vet[i]!=x);
	if(vet[i]==x){
		printf("  O número: %d está armazenado no vetor, na posição: %d\n",vet[i],i);
			}else{
				if(vet[i]!=x){
					printf("  O número: %d não está armazenado no vetor!\a\n",x);
				}
			}	
	printf("\n");
	system("Pause");
	return 0;
}
