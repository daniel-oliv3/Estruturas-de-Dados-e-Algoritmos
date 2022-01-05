#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str[10]="João";
	printf("\n  String: %s\n",str);
	printf("  Segunda letra: %c\n",str[1]);
	str[1]='U';
	printf("\n  Agora a terceira letra é: %c\n",str[2]); // capturou a letra a acentoada por causa do setlocale,
	printf("  String resultante: %s\n",str);
	system("Pause");
	return 0;
}

/**/
