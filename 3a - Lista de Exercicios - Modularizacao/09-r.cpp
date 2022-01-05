#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 9. Elabore uma função que leia um número não determinado de valores inteiros e positivos e retorne a média
de todos os números lidos. Terminar a entrada de dados com o valor zero:;*/



int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, num;
	while(num!=0){
		printf("  Digite o %dº número: ",c+1);
		scanf("%d",&num);
		c++;
	}
	
	system("Pause");
	return 0;
}

/**/
