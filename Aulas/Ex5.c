#include <stdio.h>

float lerPreco()
{
	float n = 0;
	printf("Informe o valor de fabrica do carro: ");
	scanf("%f", &n);
	return n;
}

float calculo(float f)
{
	float x = 0;
	x = f * 1.73;
	return x;
}

int main()
{
	float P_fab = lerPreco();
	float P_con = calculo(P_fab);
	printf("O valor do carro para o consumidor eh: R$%0.002f", P_con);
	printf("\n");
	system("pause");
}

