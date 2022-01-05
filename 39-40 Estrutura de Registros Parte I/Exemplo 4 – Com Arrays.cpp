#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exemplo 4 – Com Arrays;*/

struct produto{
	int codigo;
	char nome[50];
	int qtd;
	float vlrcp, vlrvd;
}item[3];

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("+----- RECEBENDO OS DADOS -----+\n");
	for(int i=0; i<3; i++){
		printf("\nCodigo: ");
		scanf("%d",&item[i].codigo);
		printf("Nome: ");
		fflush(stdin);
		gets(item[i].nome);
		printf("Quantidade: ");
		scanf("%d",&item[i].qtd);
		printf("Valor da compra R$: ");
		scanf("%f",&item[i].vlrcp);
		printf("Valor da venda R$: ");
		scanf("%f",&item[i].vlrvd);
		fflush(stdin);
	}
	printf("+----- APRESENTAÇÃO DOS DADOS -----+\n\n");
	for(int i=0; i<3; i++){
		printf("Codigo ------------------- %d\n",item[i].codigo);
		printf("Nome --------------------- %s\n",item[i].nome);
		printf("Quantidade --------------- %d\n",item[i].qtd);
		printf("Valor da Compra ---------- %.2f\n",item[i].vlrcp);
		printf("Valor da Venda ----------- %.2f\n",item[i].vlrvd);
		printf("Lucro Obtido ------------- %.2f\n",item[i].vlrvd-item[i].vlrcp);
		printf("\n");
	}
		printf("+----------------------------------+\n");
	system("Pause");
	return 0;
}

/**/
