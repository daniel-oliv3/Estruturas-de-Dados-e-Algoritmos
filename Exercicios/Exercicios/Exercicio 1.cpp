#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 01 Escreva um programa que que leia os números maiores que 0 enquanto a sua soma não ultrapasse 10, escreva a soma;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, c, r=0;
	printf("\n");
	for(c=1; r<=10; c++){
		printf("  Digite um Número: ");
		scanf("%d",&num);
		if(num>0){
		r=num+r;
		}
	}
	printf("\n  O resultado é: %d\n",r);
	system("Pause");
	return 0;
}

/**/
