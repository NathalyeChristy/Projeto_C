#include <stdio.h>
#include <math.h>

int lerNumero ()
{
	int num = 0;
	printf("Insira um numero inteiro e positivo: ");
	scanf("%i", &num);
	return num;
}

float calculoR (int a, int b)
{
	float total = 0;
	total = pow((a + b), 2);
	return total;
}

float calculoS (int b, int c)
{
	float total = 0;
	total = pow((b + c), 2);
	return total;
}

float calculoD (float r, float s)
{
	float total = 0;
	total = r + s;
	total = total / 2;
	return total;
}

void main()
{
	int a = lerNumero();
	int b = lerNumero();
	int c = lerNumero();
	float r = calculoR(a, b);
	float s = calculoS(b, c);
	float d = calculoD(r, s);
	printf("O resultado da expressao D = R + S / 2 eh: %0.2f",d);
	printf("\n");
	system ("pause");
}
