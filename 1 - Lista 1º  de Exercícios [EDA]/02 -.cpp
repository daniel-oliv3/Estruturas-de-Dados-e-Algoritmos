#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


/* 2. Fa�a um programa em C que leia um array de 10 posi��es. Verifique se existe valores iguais e escreva-os na tela.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, temp, rept, array[10];
	printf("  Digite 10 n�meros para preencher o Vetor\n");
	for(i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&array[i]);
	}
	temp=array[0]; // primeiro valor n�o entra na varedura.	
	for(i=0; i<10; i++){
		if(array[i]==temp){
			rept++; // enquanto tiverem valores iguais em sequencia incremenra este contador.
		}else{
			if(rept>1){
				printf("  O valor %i esta repetindo %i vezes\n",temp,rept);
				rept=1;
			}
			temp=array[i]; // e atualizar este valor de compara��o
		}
	}
	system("Pause");
	return 0;
}

/**/
