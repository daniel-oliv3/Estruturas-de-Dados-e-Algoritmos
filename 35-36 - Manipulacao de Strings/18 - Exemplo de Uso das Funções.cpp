#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Exemplo de Uso das Fun��es;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char palavra[30], palavra2[30], teste[30];
	int tam, comp;
	printf("  Informe uma string: ");
	gets(palavra);
	printf("  A palavra digitada �: %s\n",palavra);
	printf("  Informe uma segunda string: ");
	gets(palavra2);
	printf("  A palavra digitada �: %s\n",palavra2);
	strcpy(teste, "aula teste");
	printf("  A palavra copiada �: %s\n",teste);
	strcat(teste, "1");
	printf("  A palavra concatenada �: %s\n",teste);
	tam=strlen(palavra);
	printf(" O tamanho da primeira string �: %s\n",tam);
	comp=strcmp(palavra, palavra2);
	if(comp==0){
		printf("  S�o Iguais: %d\n",comp);
	}else{
		printf("  S�o diferentes: %d\n",comp);
	}
	printf("  Maiuscula: %s\n",strupr(palavra));
	printf("  Minusculo: %s\n",strlwr(palavra));
	system("Pause");
	return 0;
}

/**/
