#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - fa�a um programa em c que leia um array de oito posi�oes. em seguida, leia tamb�m dois valores x e y quaisquer correspondente a duas posi�oes
no array . seu programa devera exibir a soma dos valores encontrados nas respectivas posi�oes x e y;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, x, y, soma, array[8];
	printf("  Digite 8 n�meros para preencher o array\n");
	for(i=0; i<8; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("  Digite 2 n�meros referente a duas posi��es no array\n");
	printf("  Digite o valor de X: ");
	scanf("%d",&x);
	printf("  Digite o valor de Y: ");
	scanf("%d",&y);
	for(i=0; i<8; i++){
		if(x==i){
			x=i;
		}else{
			if(y==i){
				y=i;
			}
		}
		
	printf("  A soma �: %d + %d = %d\n",x,y,soma);
	}
	
	system("Pause");
	return 0;
}

/**/
