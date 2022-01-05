#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 1. Escreva um programa que leia um nome completo de
uma pessoa e conte quantas vogais esse nome
possui. Ao final, imprimir o nome completo e a
quantidade de vogais:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[80];
	int i, a=0, e=0, ii=0, o=0, u=0, n=0;
	printf("\n  Digite seu nome completo: ");
	gets(nome);
	n=strlen(nome);
	printf("\n  Números de letras e espaços em branco: %d\n",n);
	for(i=0; i<n; i++){
		if(nome[i]=='A' || nome[i]=='a'){
			a++;
		}else{
			if(nome[i]=='E' || nome[i]=='e'){
				e++;
			}else{
				if(nome[i]=='I' || nome[i]=='i'){
					ii++;
				}else{
					if(nome[i]=='O' || nome[i]=='o'){
						o++;
					}else{
						if(nome[i]=='U' || nome[i]=='u'){
							u++;
						}
					}
				}
			}
		}
	}
	printf("\n  Quantidade de voigais no nome\n");
	printf("  A = %d\n",a);
	printf("  E = %d\n",e);
	printf("  I = %d\n",ii);
	printf("  O = %d\n",o);
	printf("  U = %d\n",u);
	system("Pause");
	return 0;
}

/**/
