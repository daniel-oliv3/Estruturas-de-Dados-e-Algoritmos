#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - Crie um programa que leia um vetor de 10 posi�oes. mostre:
  - os n�meros pares informados e suas posi��es;
  - a soma dos n�meros pares informados;
  - os n�meros �mpares informados;
  - a quantidade de n�meros �mpares informados.
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int vet[10], i=0, n=1, par=0, imp=0, soma=0;
	printf("\n\n");
	for(i=0; i<10; i++){
		printf("  Digite o %d� n�mero: ",n);
		scanf("%d",&vet[i]);
		n++;
	}
	system("cls");
	printf("\n");
	for(i=0; i<10; i++){
		if((vet[i]%2)==0){
			printf("  %d � par\n",vet[i]);
			printf("  - Posi��o %d\n\n",i,vet[i]);
			soma+=vet[i];
		}else{
			if((vet[i]%1)==0){
				printf("  %d � �mpar\n\n",vet[i]);
				imp++;
			}
		}
	}
	printf("\n\n");
	printf("  A soma dos n�meros pares informados �: %d\n",soma);
	printf("  A quantidade de n�meros �mpares informados �: %d\n\n",imp);
	system("Pause");
	return 0;
}

/*  Aluno: Daniel Oliveira de Souza
*/
