#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 3. Criar um algoritmo que entre com uma palavra e
imprima conforme o exemplo a seguir:
Palavra: PARALELEPIPEDO
P
A
R
A
L
E
L
E
P
I
P
E
D
O
Exercício de Fixação
Estrutura;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char palavra[100];
	int i, n=0;
	printf("  Entre com uma palavra: ");
	gets(palavra);
	n=strlen(palavra);
	printf("\n  Números de letras e espaços em branco: %d\n\n",n);
	for(i=0; i<n; i++){
		printf("  %c\n",palavra[i]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
