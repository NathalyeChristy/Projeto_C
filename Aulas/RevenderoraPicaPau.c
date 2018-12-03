#include <stdio.h>

float lerSalario()
{
	float n = 0;
	printf("Insira o valor do salario minimo: ");
	scanf("%f", &n);
	return n;
}

int lerCarros()
{
	int n = 0;
	printf("Insira to total de carros vendidos: ");
	scanf("%i", &n);
	return n;
}

float lerVendas()
{
	float n = 0;
	printf("Insira o total das vendas: ");
	scanf ("%f", &n);
	return n;
}

float calcSalario(float x, int y, float z)
{
	float n = 0;
	n = ((x * 2) + (y * 50) + (z * 0.05));
	return n;
}

void main()
{
	printf("                    PICA - PAU Ltda.\n\n\n");
	float salarioMinimo  = lerSalario();
	int   carrosVendidos = lerCarros();
	float totalVendas    = lerVendas();
	float salario        = calcSalario(salarioMinimo, carrosVendidos, totalVendas); 
	printf("O salario do vendedor eh: R$%.2f", salario);
	printf("\n\n");
	system("pause");
}
