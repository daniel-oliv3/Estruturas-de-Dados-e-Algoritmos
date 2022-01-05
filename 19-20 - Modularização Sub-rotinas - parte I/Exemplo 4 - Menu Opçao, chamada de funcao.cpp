#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int menu(){
	int i;
	do{
		printf("  Escolha um opção\n");
		printf("  (1) Opção\n  (2) Opção\n  (3) Opção\n");
		scanf("%d",&i);
	}while((i<1) || (i>3));
	return i;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int op = menu();
	printf("  Você escolheu a opção %d\n",op);
	system("Pause");
	return 0;
}

/**/
