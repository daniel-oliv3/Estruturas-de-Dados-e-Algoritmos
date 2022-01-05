#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Para comparar duas strings;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char re[80];
	printf("  Digite a senha: ");
	gets(re);
	if(strcmp(re,"laranja")==0){
		printf("  Senha correta!\n");
	}else{
		printf("  Senha invalida!\n\a");
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
