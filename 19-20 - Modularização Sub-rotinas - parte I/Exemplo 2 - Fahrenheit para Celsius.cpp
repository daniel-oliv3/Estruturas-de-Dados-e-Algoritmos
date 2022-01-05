#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

float celsius(float fahr);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float c, f;
	printf("  Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",&f);
	c=celsius(f);
	printf("  Celsius: %.2f\n",c);
	system("Pause");
	return 0;
}

float celsius(float fahr){
	float c;
	c=(fahr - 32.0)*5.0/9.0;
	return c;
}


/**/
