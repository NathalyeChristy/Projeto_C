#include <stdio.h>

int lerValor()
{
	int n = 0;
	printf("Insira Um Valor inteiro: ");
	scanf("%i", &n);
	return n;
}

void main()
{
	int n1 = lerValor();
	int n2 = lerValor();
	
	if(n1 < n2)
	{
		if(n2 % n1 == 0)
		{
			printf("%i eh multiplo de %i.", n1, n2);
		}
		else
		{
			printf("%i nao eh multiplo de %i.", n1, n2);
		}
	}
	else
	{
		if(n1 % n2 == 0)
		{
			printf("%i eh multiplo de %i.", n2, n1);
		}
		else
		{
			printf("%i nao eh multiplo de %i.", n2, n1);
		}
	}
	printf("\n");
	system("pause");	
}
