#include <stdio.h>

float lerSalario()
{
	float bruto = 0;
	printf("Insira o salario bruto: ");
	scanf("%f", &bruto);
	return bruto;
}

float calculo1(float salario)
{
	float liquido = 0;
	liquido = salario * 0.9;
	return liquido;
}

float calculo2(float salario)
{
	float liquido = 0;
	liquido = salario * 0.95;
	return liquido;
}

void main()
{
	float bruto = lerSalario();
	float liquido = calculo1(bruto);
	float salarioFinal = calculo2(liquido);
	printf("O salario liquido eh: R$%0.2f", salarioFinal);
	printf("\n\n");
	system ("pause");
}
