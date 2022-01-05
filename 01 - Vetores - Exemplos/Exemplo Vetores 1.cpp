#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n[8];
	int i;
	for(i=0; i<8; i++){
		n[i]=i+3;
	}
	printf("%s%7s\n", "Elemento", "valor");
	for(i=0; i < 8; i++){
		printf(" n[%d]=%7s \n",i,n[i]);
		
	}
	system("Pause");
	return 0;
}

/**/
