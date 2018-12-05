#include <stdio.h>

void RetornaChar(char);

int result;
char n, digito[50];

int main()
{

		
	printf("Digite seu primeiro nome:\n");
	gets(digito);
	printf("Digite um caracter do seu nome para saber a posicao:\n");
	scanf("%c", &n);

	RetornaChar(n);
		
	
	return 0;
}

void RetornaChar(char n)
{
	int i;
	
	for(i= 0; i <=50; i++)
	{
		if (digito[i] == n)
		{
			printf("%i\n", i+1 );
		}
	}
	
}
