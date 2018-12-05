#include <stdio.h>

float lerLado()
{
	float L = 0;
	printf("Digite o valor do lado do triangulo: ");
	scanf("%f", &L);
	return L;
}

int formaTriangulo(float a, float b, float c)
{
	int x = 0;
	if(a <= b + c || b <= a + b || c <= a + b)
	{
		x = 1;
	}
	else
	{
		x = 2;
	}
	return x;
}

void tipoTriangulo(float a, float b, float c)
{
	if(a == b && b == c && c == a)
	{
		printf("Os valores insiridos formam um triangulo: >Equilatero<");
	}
	else if(a != b && b != c && c != a)
	{
		printf("Os valores insiridos formam um triangulo: >Escaleno<");
	}
	else if(a == b || b == c || c == a && a != b || b != c || c != a)
	{
		printf("Os valores insiridos formam um triangulo: >Isoceles<");
	}
	else
	{
		printf("Invalido!");
	}
	printf("\n");
	system("pause");
}

void main()
{
	float L1 = lerLado();
	float L2 = lerLado();
	float L3 = lerLado();
	int   ft = formaTriangulo(L1, L2, L3);
	if (ft == 1)
	{
		tipoTriangulo(L1, L2, L3);	
	}
	else if(ft = 2)
	{
		printf("Nao forma um triangulo");
		printf("\n");
		system("pause");
	}
}
