#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Struct Aninhados;*/

struct endereco{
	char rua[50];
	int numero;
};

struct cadastro{
	char nome[50];
	int idade;
	struct endereco ender;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct cadastro C;
	
	printf("\nLEITURA DOS DADOS\n");
	printf("Digite o Nome: ");
	gets(C.nome);
	printf("Digite a Idade: ");
	scanf("%d",&C.idade);
	printf("Informe a rua onde mora: ");
	fflush(stdin);
	gets(C.ender.rua);
	printf("Informe o número da casa: ");
	scanf("%d",&C.ender.numero);
	printf("\nIMPRESSÃO DOS DADOS\n");
	printf("Seu nome é: %s\n",C.nome);
	printf("Sua idade é: %d\n",C.idade);
	printf("Rua: %s\n",C.ender.rua);
	printf("Número: %d\n",C.ender.numero);
	system("Pause");
	return 0;
}

/**/
