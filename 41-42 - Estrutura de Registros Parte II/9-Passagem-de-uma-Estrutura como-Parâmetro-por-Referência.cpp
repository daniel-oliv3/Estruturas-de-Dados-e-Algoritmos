#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Passagem de uma Estrutura como Parâmetro por Referência ;*/

struct dado{
	int x, y;
};

void atribui(struct dado *p){
	(*p).x=10;
	(*p).y=20;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct dado p1;
	atribui(&p1);
	printf("x = %d\n",p1.x);
	printf("y = %d\n",p1.y);	
	printf("\n");
	system("Pause");
	return 0;
}

/**/
