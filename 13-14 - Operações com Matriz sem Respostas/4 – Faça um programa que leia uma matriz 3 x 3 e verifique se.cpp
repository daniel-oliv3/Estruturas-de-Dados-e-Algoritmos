#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 4 � Fa�a um programa que leia uma matriz 3 x 3 e verifique se
existe nessa matriz valores iguais a 12 ou n�o:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c=1, doze, mat[3][3];
	printf("  Informe 9 n�meros para preencher a Matriz 3x3\n");
	for(i=0; i<3; i++){
		for(j=0;j<3; j++){
			printf("  Digite o %d� n�mero: ",c);
			scanf("%d",&mat[i][j]);
			c++;
		}
	}
	//system("cls");
	for(i=0; i<3; i++){
		for(j=0;j<3; j++){
			if(mat[i][j]==12){
				printf("\n  O n�mero 12 existe na matriz!\n");
			}
	  	}
	}
	system("Pause");
	return 0;
}

/**/
