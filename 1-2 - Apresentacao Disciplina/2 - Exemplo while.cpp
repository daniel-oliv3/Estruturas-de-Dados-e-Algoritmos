#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exemplo com While;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i=1, j;
	while(i<5){
		j=1;
		while(j<5){
			if(i==j){
				printf("1 ");
			}else{
				printf("0 ");
			}
			j++;
		}
		printf("\n");
		i++;
	} 
	system("Pause");
	return 0;
}

/**/
