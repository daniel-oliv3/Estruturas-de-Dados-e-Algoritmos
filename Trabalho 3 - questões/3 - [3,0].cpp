#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 - elaborar um programa que leia um array A 3x3 com números inteiros, calcule e mostre:
- a soma dos elementos da linha 1;
- a soma dos elementos da linha 2;
- soma dos elementos da diagonal principal;
- a soma dos elementos da diagonal secundaria;;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, soma1=0, soma2=0, somad=0, array_a[3][3];
	printf("  Digite 9 números para preencher o array 3x3\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("  Digite o %dº número: ",c);
			scanf("%d",&array_a[i][j]);
			c++;
		}
	}
	system("cls");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("  Array A[%d][%d] = %d\n",i,j,array_a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++){
		soma1=soma1+array_a[1][i];
		soma2=soma2+array_a[2][i];
		somad=somad+array_a[i][i];
	}
	printf("  A soma dos elementos da primeira linha é: %d\n",soma1);
	printf("  A soma dos elementos da segunda linha é: %d\n",soma2);
	printf("  A soma dos elementos da diagonal principal é: %d\n",somad);
	system("Pause");
	return 0;
}

/* Faculdade FUCAPI;
- Aluno: Daniel Oliveira de Souza;
- Aluna: Lizandra Caroline da Silva Nunes 
- Turma:
- Turno: Moturno;
*/

/**/
