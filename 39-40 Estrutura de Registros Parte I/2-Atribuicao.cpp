#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 		Registros (Structs)

ATRIBUI��O
� Da mesma forma que as vari�veis, sendo que deve referenciar
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
	strcpy(Pessoa.nome, "Jos�"); //copiando o nome jose para variavel nome, da struct, Pessoa
	strcpy(Pessoa.rua, "Av. Costa");

	printf("  Nome: %s\n",Pessoa.nome);  	//imprimindo os resuldados da atribui��o dos valores
	printf("  Idade: %d\n",Pessoa.idade);
	printf("  Rua: %s\n",Pessoa.rua);
	printf("  N�mero: %d\n",Pessoa.numero);
	system("Pause");
	return 0;
}

/**/
