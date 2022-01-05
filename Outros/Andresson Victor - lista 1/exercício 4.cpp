//dúvida em mostrar os elementos não comuns
#include<stdio.h>
#include<conio.h>
# define tam1 10
#define tam2 20

int main(){
	int v1[tam1],v2[tam2];
    int i;
for(i=0;i<tam1;i++){
   printf("\ninforme o valor vetor 1: ");
   scanf("%d",&v1[i]);
   }
   printf("\n");
for(i=0;i<tam2;i++){
	printf("\ninforme o valor vetor 2: ");
	scanf("%d",&v2[i]);
}

printf("\nvalor do vetor 1:");
for(i=0;i<tam1;i++){
   printf("%d ",v1[i]);
   }
printf("\nvalor do vetor 2:");
for(i=0;i<tam2;i++){
	printf("%d ",v2[i]);
}
getch();
return 0;
}
