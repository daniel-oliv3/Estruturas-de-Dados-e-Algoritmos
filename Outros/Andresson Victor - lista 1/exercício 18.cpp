#include<stdio.h>
#include<stdlib.h>

int main(){
	const int voltas=4;
	int i,j,aux,MV;
	float tempo[voltas],media,soma;
	
	for(i=0;i<voltas;i++){
		printf("\n Informe o tempo registrado da volta[%d]:",i+1);
		scanf("%f",&tempo[i]);
	}
	
    float MT=tempo[1];
	for(i=0;i<voltas;i++){
		if(tempo[i]<MT){
			MT=tempo[i];
			MV=i;	
		}
	
		}
	
		for(i=0;i<voltas;i++){
			soma=soma+tempo[i];
			media=soma/voltas;
				
		}
		printf("\n Melhor tempo foi %.2f na volta %d",MT,MV+1);
		printf("\n TEMPO MEDIO:%.2f\n",media);
	
	
system("pause");
return 0;
}
