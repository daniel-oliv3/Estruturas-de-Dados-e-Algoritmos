#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* LA�O CONDICIONAL ANINHADO (WHILE)

Criar um programa que implemente a forma de um tri�ngulo
ret�ngulo com N linhas, usando o s�mbolo de asterisco.
Utilize repeti��o aninhada:
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
