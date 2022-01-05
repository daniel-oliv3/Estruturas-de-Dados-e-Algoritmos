#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


/* Criar um programa que leia uma frase e após leia uma caracter, verifique e imprima a ocorrencia 
desse caractere na frase informada:

frase: Eis que, tudo posso naquele que me fortalece...
caracter e

ocorrencia 8 veses: ;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, n, cont=0; 
	char frase[80];
	printf("\n  Digite um frase: ");
	gets(frase);
	system("cls");
	n=strlen(frase); // tamanho da cadeia
	for(i=0; i<n; i++){
		if(frase[i]=='e' || frase[i]=='E'){
			cont++;
		}
	}
	printf("\n  A frase informada é: %s\n",frase);
	printf("  Ocorrências %d veses\n",cont);
	system("Pause");
	return 0;
}

/* Faculdade FUCAPI;
- Aluno: Daniel Oliveira de Souza;
- Aluna: Lizandra Caroline da Silva Nunes 
- Turma:
- Turno: Moturno;
*/


