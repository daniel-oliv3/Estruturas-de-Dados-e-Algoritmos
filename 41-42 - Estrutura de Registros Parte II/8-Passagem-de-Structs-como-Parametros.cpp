#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 7-Passagem-de-Structs-como-Parametros;
	-Passagem de um Campo como Parâmetro por Valor
função*/


struct dado{
	int x, y;	
};

void imprime(int n){
	printf("Valor = %d\n",n);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	struct dado p1={10,20};
	imprime(p1.x);
	imprime(p1.y);
	system("Pause");
	return 0;
}

/**/
