#include "pch.h"
#include <stdio.h>
#include <stdlib.h>


int soma2valor(int a, int b)
{
	int c;
	c = a + b;
	return c;
	
}

int LerValorInteiro()
{

	int value;

	printf("Digite dois valores inteiros: ");
	scanf_s("%d", &value);

	return value;

}

int main()
{
	int c;

	int primeiroValor = LerValorInteiro();
	int segundoValor = LerValorInteiro();

	// function sum passage (parameteres).
	c = soma2valor(primeiroValor,segundoValor);

	printf("RESULTADO: %d\n", c);

	system("pause");
	return 0;
}

