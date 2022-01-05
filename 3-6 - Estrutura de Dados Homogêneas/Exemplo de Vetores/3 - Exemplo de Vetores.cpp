#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n[8]={32,27,64,18,95,37,14,70};
	int i;
	printf("%s%7s \n", "Elemento", "Valor");
	for(i=0; i<8; i++){
		printf(" n[%d]=%7d \n",i,n[1]);
	}
	system("Pause");
	return 0;
}

/**/
