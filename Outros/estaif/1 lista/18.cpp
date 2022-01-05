#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#define t 4
int main()
{
    setlocale(LC_ALL,"ptb");
	
	int i,menor_volta=0;
	float t_m=0.0,voltas=0.0,t_voltas[t],menor,n;
	
	for(i=0;i<t;i++){
		do{
			printf("Informe o tempo da %d volta",i+1);
			scanf("%f",&n);
				
		}while(n<0);
		t_voltas[i]=n;
		voltas+=t_voltas[i];
	}

	menor=t_voltas[0];
	for(i=0;i<t;i++){
		
		if(t_voltas[i]<menor){
			menor=t_voltas[i];
			menor_volta=i;
		}
	}
	
	t_m=voltas/t;
	
	if(t_m!=0){
		printf("Melhor tempo registrado %.2f\nA volta em que o melhor tempo ocorreu %d\nTempo médio das N voltas %.2f\n",menor,menor_volta,t_m);
	}
	else{
		printf("\n\n\tVoce informou algo errado\n");
	}

	printf("\n\n");
	system("pause");
	exit(1);

}






