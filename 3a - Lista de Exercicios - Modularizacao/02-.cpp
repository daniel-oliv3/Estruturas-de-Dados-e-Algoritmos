#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva uma função que receba o peso em quilos (Kg) 
e a altura em metros (m) de uma pessoa. Calcule e
retorne o IMC (IMC = peso / altura2) dessa pessoa:;*/

float IMC(float a, float b){
	return a/(b*b);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float peso, altura, resultado;
	printf("  Digite o seu peso: ");
	scanf("%f",&peso);
	printf("  Digite a sua altura: ");
	scanf("%f",&altura);
	resultado=IMC(peso, altura);
	printf("  O calculo IMC é: %.2f\n",resultado);
	system("Pause");
	return 0;
}

/**/
