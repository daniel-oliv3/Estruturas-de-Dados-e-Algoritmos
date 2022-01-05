#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam1 2
#define tam2 2

/* 2. Fa�a um programa para ler um array A de duas dimens�es com 6 linhas e 5 colunas. Construir um array B
de mesma dimens�o, que dever� ser formada do seguinte modo: para cada elemento par do array A dever�
ser somado 5 e para cada elemento �mpar da array A dever� ser subtra�do 4. Apresentar ao fial o array A e
B:;*/

void Limpar(); //Prototipo da fun��o auxiliar limpar tela

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, A[tam1][tam2], B[tam1][tam2]; // declara��o de variaveis
	for(i=0; i<tam1; i++){ //loop for para percorrer a matriz.
		for(j=0; j<tam2; j++){ //loop
			printf("Digite o %d� n�mero: ",j+1); 
			scanf("%d",&A[i][j]); //leitura dos dados do teclado
		}
	}
	Limpar(); // chamada a fun��o limpar a tela.
	for(i=0; i<tam1; i++){ // opera��o par e impar;
		for(j=0; j<tam2; j++){
			if(A[i][j]%2==0){
				B[i][j]=A[i][j]+5;
			}else
			B[i][j]=A[i][j]-4;
		}
	}
	printf("Resultado: n�meros pares +5 | n�meros �mpares -4\n");
	for(i=0; i<tam1; i++){
		for(j=0; j<tam2; j++){
			printf("B[%d][%d] = %d\n",i,j,B[i][j]);  // impress�o do resultado.
		}
	}
	system("Pause");
	return 0;
}

/**/

void Limpar(){   //Fun��o auxiliar limpar tela
	system("cls");
}
