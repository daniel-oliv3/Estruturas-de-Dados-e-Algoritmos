#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*  Retornando uma Estrutura por meio de uma Função
Exemplo de Estrutura por Retorno;*/

typedef struct DadosVenda{
	int peca;
	float preco;
}Venda;

Venda TotalDeVendas(Venda X, Venda Y){
	Venda T;
	T.peca=X.peca+Y.peca;
	T.preco=X.preco*X.preco+Y.preco*Y.preco;
	return T;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	Venda A, B, Total;
	printf("\nVenda A\n");
	printf("Digite o número de peças: ");
	scanf("%d",&A.peca);
	printf("Digite o preço: ");
	scanf("%f",&A.preco);
	printf("\nVenda B\n");
	printf("Digite o número de peças: ");
	scanf("%d",&B.peca);
	printf("Digite o preço: ");
	scanf("%f",&B.preco);
	Total=TotalDeVendas(A, B);
	printf("\nTotal das Vendas\n");
	printf("Total de peças: %d\n",Total.peca);
	printf("Preço Total: %.2f\n",Total.preco);
	system("Pause");
	return 0;
}

/**/
