#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam1 3
#define tam2 5

/*9. Desenvolver um programa que possa armazenar as alturas de dez atletas de cinco delega��es que
participar�o das olimp�adas de 2016. Imprimir a maior altura de cada delega��o: ;*/

void Limpar();

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j;
	float m[tam1][tam2], altura[5];
	printf("-----+ Olimp�adas 2016 +----- \n");
	for(i=0; i<tam1; i++){
		printf("\n%d� delega��o olimpica\n",i+1);
		for(j=0; j<tam2; j++){
			printf("Digite a %d� altura: ",j+1);
			scanf("%f",&m[i][j]);
		}
		printf("\n");
		Limpar();
	}
	for(i=0; i<tam1; i++){
		altura[i]=m[i][j];
		for(j=0; j<tam2; j++){
			if(m[i][j]>altura[i]){
				altura[i]=m[i][j];
			}
		}
	}
	printf("\n");
	printf(" As maiores alturas de cada delega��o olimp�ca\n");
	for(i=0; i<5; i++){
		printf("\n%d� altura: %.2f\n",i+1, altura[i]);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/

void Limpar(){
	system("cls");
}
