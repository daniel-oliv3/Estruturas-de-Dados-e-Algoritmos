#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h> //biblioteca p/ as funções isalpha isdigit toupper tolower
#include<string.h>

/* Criar um programa que leia uma frase e após leia um caractere, e verifique 
se o caractere existe na frase e apague todas as ocorrencias desse caracter na frase informada:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, n, cont=0; 
	char aux[2], frase[100], letra[2];
	printf("\n  Digite um frase: ");
	gets(frase);
	printf("  Digite um caractere: ");
	scanf("%c",&letra);
	strlwr(frase);
	strlwr(letra);
	system("cls");
	n=strlen(frase); // tamanho da cadeia
	for(i=0; i<n; i++){
		aux[0]=frase[i];
		if(aux[0]==letra[0]){
			frase[i]=' ';
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

/**/
