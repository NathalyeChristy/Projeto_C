
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int valores() {

	int val= 0;

	printf("Digite os valores Inteiros: ");
	scanf_s("%i", &val);

	return val;

}


int maior() {

	int a = valores();
	int b = valores();
	int c = valores();
	int d = valores();

/*	if (a > b && a > c && a > d)
	{
		return a;
	}
	else if(b > a && b > c && b > d)
	{
		return b;
	}
	else if(c > a && c > b && c > d) {
		return c;
	}
	else {
		return d;
		
	}*/

	int maior = a;

	if (maior < b)
	{
		return b;
	}
	if (maior < c)
	{
		return c;
	}
	if (maior < d)
	{
		return d;
	}
	return maior;
}
int main()
{

	int c;

	c = maior();

	printf("O valor Maior e: %d\n", c);

	system("pause");
	return 0;
}



