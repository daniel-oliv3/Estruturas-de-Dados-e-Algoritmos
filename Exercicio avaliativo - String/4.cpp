#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Criar um programa que leia uma frase, verifique e imprima a ocorrencia dos caracteres que se repetem na frase informada:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char frase[100];
	int fraseaux[100];
  	int ascii[255];
  	int i;
 	printf("  Digite uma frase: ");
   	gets(frase);
	for(i=0; i<255; i++){
 		ascii[i]=0; 
    }
	for(i=0; i<strlen(frase);i++){
	  fraseaux[i]=frase[i];
    }
  	for(i=0; i<strlen(frase); i++){
        if (fraseaux[i] > 64 && fraseaux[i] <91){
           fraseaux[i]=fraseaux[i]+32;
           }
    }    
	for(i=0; i<strlen(frase); i++){                        
 	 if (fraseaux[i] != 32){                           
        ascii[fraseaux[i]]++; 
        }                            
	}
	printf("\n");
 	for(i=0; i<255; i++){
        if (ascii[i] > 1){ 
   			printf("  A letra %c repetiu %d vezes na frase\n", i, ascii[i]);
           }      
 	}
	printf("\n");
	system("Pause");
	return 0;
}

/* Faculdade FUCAPI;
- Aluno: Daniel Oliveira de Souza;
- Aluna: Lizandra Caroline da Silva Nunes 
- Turma:
- Turno: Moturno;
*/

/**/
