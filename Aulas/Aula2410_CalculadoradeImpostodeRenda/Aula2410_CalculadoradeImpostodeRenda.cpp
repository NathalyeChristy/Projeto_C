// Aula2410_CalculadoradeImpostodeRenda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

float valor()
{
	int value = 0;

	printf("Insira o val0r do salario: ");
	scanf_s("%f", &value);

	return value;
}


void calc() {
	
	float salario=valor();
	float impostoDevido = 0;
	
	if ( salario <= 1903.98 )
	{
		
		printf("Isento!\n");
		
	}
	else if (salario <= 2826.65)
	{
		
		impostoDevido = (salario*0.075)-142.8;

		printf("A aliquota e: 7.5%%, deducao 142.80, imposto devido\n", impostoDevido);
		
	}
	else if (salario <= 3751.05) 
	{
		impostoDevido = (salario*0.15) - 354.80;

		printf("A aliquotae: 15%%, deducao 354,80.80, imposto devido\n", impostoDevido);
	}
	else if (salario <= 4664.68)
	{
		impostoDevido = (salario*0.225) - 639.13;

		printf("A aliquota e: 22.5%%, deducao 639.13, imposto devido\n", impostoDevido);
		
	}
	else 
	{
		impostoDevido = (salario*0.275) - 869.36;

		printf("A aliquota e: 27.5%%\n deducao 869.36\n imposto devido %f\n", impostoDevido);
		
	}
	
}

int main()
{
	calc();
	system("pause");
	return 0;
}
