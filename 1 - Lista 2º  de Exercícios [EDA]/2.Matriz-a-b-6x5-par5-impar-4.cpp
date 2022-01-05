#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam1 2
#define tam2 2

/* 2. Faça um programa para ler um array A de duas dimensões com 6 linhas e 5 colunas. Construir um array B
de mesma dimensão, que deverá ser formada do seguinte modo: para cada elemento par do array A deverá
ser somado 5 e para cada elemento ímpar da array A deverá ser subtraído 4. Apresentar ao fial o array A e
B:;*/

void Limpar(); //Prototipo da função auxiliar limpar tela

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, A[tam1][tam2], B[tam1][tam2]; // declaração de variaveis
	for(i=0; i<tam1; i++){ //loop for para percorrer a matriz.
		for(j=0; j<tam2; j++){ //loop
			printf("Digite o %dº número: ",j+1); 
			scanf("%d",&A[i][j]); //leitura dos dados do teclado
		}
	}
	Limpar(); // chamada a função limpar a tela.
	for(i=0; i<tam1; i++){ // operação par e impar;
		for(j=0; j<tam2; j++){
			if(A[i][j]%2==0){
				B[i][j]=A[i][j]+5;
			}else
			B[i][j]=A[i][j]-4;
		}
	}
	printf("Resultado: números pares +5 | números ímpares -4\n");
	for(i=0; i<tam1; i++){
		for(j=0; j<tam2; j++){
			printf("B[%d][%d] = %d\n",i,j,B[i][j]);  // impressão do resultado.
		}
	}
	system("Pause");
	return 0;
}

/**/

void Limpar(){   //Função auxiliar limpar tela
	system("cls");
}
