#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 		Registros (Structs)

ATRIBUIÇÃO
• Da mesma forma que as variáveis, sendo que deve referenciar
o nome da estrutura declarada.;*/

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
	Pessoa.idade = 22; // atribuindo 22 a variavel idade da struct , Pessoa 
	Pessoa.numero = 41;
	strcpy(Pessoa.nome, "José"); //copiando o nome jose para variavel nome, da struct, Pessoa
	strcpy(Pessoa.rua, "Av. Costa");

	printf("  Nome: %s\n",Pessoa.nome);  	//imprimindo os resuldados da atribuição dos valores
	printf("  Idade: %d\n",Pessoa.idade);
	printf("  Rua: %s\n",Pessoa.rua);
	printf("  Número: %d\n",Pessoa.numero);
	system("Pause");
	return 0;
}

/**/
