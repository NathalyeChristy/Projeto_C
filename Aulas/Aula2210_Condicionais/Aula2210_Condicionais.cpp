
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int valores() {

	int val= 0;

	printf("Digite os valores Inteiros: ");
	scanf_s("%i", &val);

	return val;

}
float media(float a, float b, float c, float d)
{
	float med = (a + b + c + d) / 4;

	return med;
}

int val_media(int a, int b, int c, int d) {

	float ma = media(a,b,c,d);
	float med = ma;

	if (med < b)
	{
		return b;
	}
	if (med < c)
	{
		return c;
	}
	if (med < d)
	{
		return d;
	}
	return med;
}
int maior(int a, int b, int c, int d) {

	float med = media(a, b, c, d);

	

	if (med < a) {
		return a;
	}

	if (med < b)
	{
		return b;
	}
	if (med < c)
	{
		return c;
	}
	if (med < d)
	{
		return d;
	}
	return 0;

}


int main()
{
	int a = valores();
	int b = valores();
	int c = valores();
	int d = valores();


	 int e = val_media(a,b,c,d);
	float f = media(a, b, c, d);

	printf("O valor Maior e: %d\n", e);
	printf("media:%.2f", f);

	system("pause");

	return 0;
}



