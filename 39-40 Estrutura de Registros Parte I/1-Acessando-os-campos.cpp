#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*		Registros (Structs) 

ACESSANDO OS CAMPOS
• Cada campo (variável) da estrutura pode ser acessada usando
o operador “.” (ponto).
;*/

struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
}Pessoa;


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("  Nome: ");
	gets(Pessoa.nome); //leitura de dados
	printf("  Idade: ");
	scanf("%d", &Pessoa.idade); //leitura de dados
	printf("  Nome escrito: %s\n",Pessoa.nome); //imprimir na tela o nome armazenado na variavel nome do struct
	printf("  Idade escrita: %d\n",Pessoa.idade);
	system("Pause");
	return 0;
}

/**/
