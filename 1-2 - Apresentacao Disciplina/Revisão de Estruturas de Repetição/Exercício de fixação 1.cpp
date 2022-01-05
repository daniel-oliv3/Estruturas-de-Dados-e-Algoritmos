#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* LAÇO CONDICIONAL ANINHADO (WHILE)

Criar um programa que implemente a forma de um triângulo
retângulo com N linhas, usando o símbolo de asterisco.
Utilize repetição aninhada:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b, i, j;
	printf("  Digite a altura: ");
	scanf("%d",&a);
	printf("  Digite a largura: ");
	scanf("%d",&b);
	for(i=a; i<=b; i=i+1){
		for(j=0; j<i; j=j+1){
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
