#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Exemplo de Uso das Funções;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char palavra[30], palavra2[30], teste[30];
	int tam, comp;
	printf("  Informe uma string: ");
	gets(palavra);
	printf("  A palavra digitada é: %s\n",palavra);
	printf("  Informe uma segunda string: ");
	gets(palavra2);
	printf("  A palavra digitada é: %s\n",palavra2);
	strcpy(teste, "aula teste");
	printf("  A palavra copiada é: %s\n",teste);
	strcat(teste, "1");
	printf("  A palavra concatenada é: %s\n",teste);
	tam=strlen(palavra);
	printf(" O tamanho da primeira string é: %s\n",tam);
	comp=strcmp(palavra, palavra2);
	if(comp==0){
		printf("  São Iguais: %d\n",comp);
	}else{
		printf("  São diferentes: %d\n",comp);
	}
	printf("  Maiuscula: %s\n",strupr(palavra));
	printf("  Minusculo: %s\n",strlwr(palavra));
	system("Pause");
	return 0;
}

/**/
