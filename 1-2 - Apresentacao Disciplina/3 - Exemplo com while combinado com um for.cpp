#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exemplo com while combinado com um for;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i=1, j; 
	while(i<5){
		for(j=1; j<5; j++){
			if(i==j){
				printf("1 ");
			}else{
				printf("0 ");
			}
		}
		printf("\n");
		i++;
	}
	system("Pause");
	return 0;
}

/**/
