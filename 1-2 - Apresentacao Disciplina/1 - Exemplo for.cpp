#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Revis�o de Estruturas de Repeti��o
Aninhamento ou Encadeamento

Exemplo for
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j;
	for(i=1; i<5; i++){
		for(j=1; j<5; j++){
			if(i==j){
				printf("1 ");
			}else{
				printf("0 ");
			}
		}
		printf("\n");
	}	
	system("Pause");
	return 0;
}

/**/
