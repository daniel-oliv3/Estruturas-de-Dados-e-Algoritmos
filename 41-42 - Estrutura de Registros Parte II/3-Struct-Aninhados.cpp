#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Struct Aninhados;
*/

struct tipo_endereco{
	char rua[50];
	int numero;
	char bairro[20];
	char cidade[30];
	char estado[3];
	int CEP;
};

struct nascimento{
	int dia;
	int mes;
	int ano;
};

struct ficha_pessoal{
	char nome[50];
	int telefone;
	struct tipo_endereco endereco;
	struct nascimento dtnasc;
}ficha[3];

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i=0;
	for(i=0; i<3; i++){
		printf("\nNome: ");
		gets(ficha[i].nome);
		printf("Rua: ");
		gets(ficha[i].endereco.rua);
		printf("Dia de Nascimento: ");
		scanf("%d",&ficha[i].dtnasc.dia);
		printf("Mês de Nascimento: ");
		scanf("%d",&ficha[i].dtnasc.mes);
		printf("Ano de Nascimento: ");
		scanf("%d",&ficha[i].dtnasc.ano);
		fflush(stdin);
		strcpy(ficha[i].endereco.estado, "AM");
	}
	system("cls");
	printf("\nFicha Pessoal\n");
	for(i=0; i<3; i++){
		printf("\nNome: %s\n",ficha[i].nome);
		printf("Rua: %s\n",ficha[i].endereco.rua);
		printf("UF: %s\n",ficha[i].endereco.estado);
		printf("Nascimento: %d/%d/%d\n",ficha[i].dtnasc.dia,ficha[i].dtnasc.mes,ficha[i].dtnasc.ano);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
