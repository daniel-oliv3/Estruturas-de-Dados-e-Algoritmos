#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Exemplo 1
;*/

struct funcionario{ //Defini��o da struct
	char nome[50];
	int idade;
	char sexo;
	float altura;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct funcionario f; // Declara��o da struct
	strcpy(f.nome, "Jo�o");
	f.idade=38;  // atribuindo valoror a variavel idade da struct funcionario
	f.sexo='M';
	f.altura=1.76;
	printf("Nome: %s\n",f.nome); // imprimindo os elementos da struct 
	printf("Idade: %d\n",f.idade);
	printf("Sexo: %c\n",f.sexo);
	printf("Altura: %4.2f\n",f.altura);
	system("Pause");
	return 0;
}

/**/
