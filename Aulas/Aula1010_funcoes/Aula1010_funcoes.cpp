#include "pch.h"
#include <stdio.h>
#include <stdlib.h>


int soma2valor(int a, int b)
{
	int c;
	c = a + b;
	return c;
	
}
int main()
{
	int a, b,c;

	printf("Digite o valor de A: ");
	scanf_s("%d", &a);

	printf("Digite o valor de B: ");
	scanf_s("%d", &b);

	c = soma2valor(a,b);

	printf("RESULTADO: %d\n", c);

	system("pause");
	return 0;
}

