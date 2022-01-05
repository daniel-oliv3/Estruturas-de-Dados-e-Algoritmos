#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char frase[100];
  int fraseaux[100];
  int ascii[255];
  int i;

  printf("\n:::Algoritimo que conta quantas vezes cada letra de uma frase repetiu:::\n");
  printf("\nDigite uma frase: \n");
  printf("\n");
  gets(frase);

 //Zerando Tabela ASCII
 for (i=0; i<255; i++){
  ascii[i]=0; 
    }

 //Transformando carcteres de frase em inteiros (ASCII)
 for (i=0; i<strlen(frase);i++){
  fraseaux[i]=frase[i];
    }

 //transformando caracteres caixa alta para caixa baixa
 for (i=0; i<strlen(frase); i++){
        if (fraseaux[i] > 64 && fraseaux[i] <91){
           fraseaux[i]=fraseaux[i]+32;
           }
    }    

 //contar quantidades de vezes
 for (i=0; i<strlen(frase); i++){                       //rodo por todas as letras 
  if (fraseaux[i] != 32){                            // retirar espaços da contagem
        ascii[fraseaux[i]]++; 
        }                             /* Guardando quantidade de vezes que a letras se repete*/ 
 }

 //imprimindo repetidos
 for (i=0; i<255; i++){
        if (ascii[i] > 1){      //verificar se e maior quer 1 pois não a necessidade de imprimir 1 ou 0 vezes! 
   printf("\nA letra %c repetiu %d vezes na frase que voce escreveu!\n", i, ascii[i]);
           }      
 }

  printf("\n");
  system("pause");
  return 0;
}
