#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Criar um programa que preencha um vetor de oito elementos
num�ricos, ap�s pe�a para o usu�rio informar um n�mero
qualquer, em seguida verifique se o valor existe e qual sua
posi��o:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int pos, achou=0, num, i=0, vet[8]={2,4,3,8,6,10,7};
	printf("  Digite um n�mero: ");
	scanf("%d",&num);
	for(i=0; i<8; i++){
		if(vet[i]==num){
			achou = 1;
			pos=vet[i];
		}
	}
	if(achou){
			printf("  O n�mero %d est� na posi��o: %d\n",num,pos);
		}else{
			printf(" O n�mero n�o foi declarado no vetor!\n");
		}
	system("Pause");
	return 0;
}

/**/
