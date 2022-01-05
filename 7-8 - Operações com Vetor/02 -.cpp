#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - Crie um programa que leia um vetor de 10 posiçoes. mostre:
  - os números pares informados e suas posições;
  - a soma dos números pares informados;
  - os números ímpares informados;
  - a quantidade de números ímpares informados.
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int vet[10], i=0, n=1, par=0, imp=0, soma=0;
	printf("\n\n");
	for(i=0; i<10; i++){
		printf("  Digite o %dº número: ",n);
		scanf("%d",&vet[i]);
		n++;
	}
	system("cls");
	printf("\n");
	for(i=0; i<10; i++){
		if((vet[i]%2)==0){
			printf("  %d é par\n",vet[i]);
			printf("  - Posição %d\n\n",i,vet[i]);
			soma+=vet[i];
		}else{
			if((vet[i]%1)==0){
				printf("  %d é ímpar\n\n",vet[i]);
				imp++;
			}
		}
	}
	printf("\n\n");
	printf("  A soma dos números pares informados é: %d\n",soma);
	printf("  A quantidade de números ímpares informados é: %d\n\n",imp);
	system("Pause");
	return 0;
}

/*  Aluno: Daniel Oliveira de Souza
*/
