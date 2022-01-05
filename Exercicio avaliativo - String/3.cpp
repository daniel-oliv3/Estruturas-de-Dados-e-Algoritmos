#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Criar um programa que leia uma palavra, imprima cada letra por linha sempre adicionando uma nova letra, ate formar a palavra inicialmente informada
A impressão da palavra deve ser no formato inverso, conforme o exemplo.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];
	int i, j, tam, aux;
	printf("  Digite uma palavra: ");
	gets(string);
	tam=strlen(string);
	aux=tam;
	for(i=0; i<tam; i++){
		for(j=aux-1;j<tam; j++){
			printf("%c",string[j]);
		}
		printf("\n");
		aux--;
	}
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
