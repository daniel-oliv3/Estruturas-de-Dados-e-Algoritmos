#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 5

/* Exemplo 5 – Com Arrays
;*/

struct contato{
	char nome[50], tel[20];
	int idade;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct contato vet[MAX];
	int i;
	for(i=0; i<MAX; i++){  // lento vetor registro
		printf("\nNome: ");
		gets(vet[i].nome);
		printf("Telefone: ");
		gets(vet[i].tel);
		printf("Idade: ");
		scanf("%d",&vet[i].idade);
		fflush(stdin);
	}
	system("cls");
	printf("\n");
	for(i=0; i<MAX; i++){ // imprimindo vetor registro
		printf("\nNome: %s\n",vet[i].nome);
		printf("Telefone: %s\n",vet[i].tel);
		printf("Idade: %d\n",vet[i].idade);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
