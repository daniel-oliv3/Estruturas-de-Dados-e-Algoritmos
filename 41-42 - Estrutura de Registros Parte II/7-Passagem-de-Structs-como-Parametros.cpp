#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Passagem de Structs como Parâmetros;*/

struct dado{
	int x, y;
};

void imprime(struct dado p){
	printf(" x = %d\n",p.x);
	printf(" y = %d\n",p.y);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct dado p1={10,20};
	imprime(p1);
	system("Pause");
	return 0;
}

/**/
