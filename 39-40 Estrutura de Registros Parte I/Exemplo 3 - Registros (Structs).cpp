#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exemplo 2 - Registros (Structs);*/

struct produto{
	int codigo;
	char nome[50];
	int qtd;
	float vlrcomp, vlrvend;
}item;

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("+--- RECEBENDO OS DADOS ---+\n");
	printf("\nCodigo: ");
	scanf("%d",&item.codigo);
	printf("Nome: ");
	fflush(stdin);
	gets(item.nome);
	printf("Quantidade: ");
	scanf("%d",&item.qtd);
	printf("\nValor da Compra R$: ");
	scanf("%f",&item.vlrcomp);
	printf("Valor da Venda R$: ");
	scanf("%f",&item.vlrvend);
	system("cls");
	printf("\n+------ APRESENTAÇÃO DOS DADOS ------+\n");
	printf("Codigo ------------------- %d\n",item.codigo);
	printf("Nome --------------------- %s\n",item.nome);
	printf("Quantidade --------------- %d\n",item.qtd);
	printf("Valor da Compra ---------- %.2f\n",item.vlrcomp);
	printf("Valor da Venda ----------- %.2f\n",item.vlrvend);
	printf("Lucro Obtido ------------- %.2f\n",item.vlrvend-item.vlrcomp);
	system("Pause");
	return 0;
}

/**/
