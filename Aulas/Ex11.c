#include <stdio.h>
#include <math.h>

float lerRaio()
{
	float n = 0;
	printf("Insira o valor o raio: ");
	scanf("%f", &n);
	return n;
}
float calculo(float n1)
{
	float x = 0;
	x = (pow(n1,2));
	x = x * 3.14159;
	return x;
}
int main()
{
	float raio = lerRaio();
	float area = calculo(raio);
	printf("A area da circunferencia eh: %f", area);
	printf("\n");
	system ("pause");
}
