#include <stdio.h>
#include <math.h>

float lerBase ()
{
	float n = 0;
	printf("Insira o Valor da base do triangulo: ");
	scanf("%f", &n);
	return n;
}
float lerAltura ()
{
	float n = 0;
	printf("Insira o valor da Altura do triangulo: ");
	scanf("%f", &n);
	return n;
}
float calculo (float n1, float n2)
{
	float x = 0;
	x = (n1*n2)/2;
	return x;
}

int main ()
{
	float base = lerBase();
	float altura = lerAltura();
	float area = calculo(base, altura);
	printf("A area do triangulo eh: %0.3f", area);
	printf("\n");
	system("pause");
}
