#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int menu(){
	int i;
	do{
		printf("  Escolha um op��o\n");
		printf("  (1) Op��o\n  (2) Op��o\n  (3) Op��o\n");
		scanf("%d",&i);
	}while((i<1) || (i>3));
	return i;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int op = menu();
	printf("  Voc� escolheu a op��o %d\n",op);
	system("Pause");
	return 0;
}

/**/
