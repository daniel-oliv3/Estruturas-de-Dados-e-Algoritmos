#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 9. Elabore uma fun��o que leia um n�mero n�o determinado de valores inteiros e positivos e retorne a m�dia
de todos os n�meros lidos. Terminar a entrada de dados com o valor zero:;*/



int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, num;
	while(num!=0){
		printf("  Digite o %d� n�mero: ",c+1);
		scanf("%d",&num);
		c++;
	}
	
	system("Pause");
	return 0;
}

/**/
