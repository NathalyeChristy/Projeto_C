#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
char caractere;
//função de entrada
float entrada()
{

	float value;
	printf("Digite o valor: ");
	scanf_s("%f", &value);
	
	return value;
}
float soma (float a, float b) {

	float result = a + b;

	return result;
}
float subtracao(float a, float b) {

	float resultsubtracao = a - b;

	return resultsubtracao;
}
float divisao(float a, float b) {
	if (b == 0)
	{
		return 0;
	}

	float resultdivisao = a / b;


	return resultdivisao;
}
float multiplicacao(float a, float b) {

	float resultmultiplicacao = a * b;

	return resultmultiplicacao;
}



int main()
{
//	setlocale(LC_ALL, "portuguese");

	float a = entrada();
	float b = entrada();

	
	

	printf(" \n\n Soma %2.f\n", soma(a,b));
	printf(" Subtracao %2.f\n", subtracao(a,b));
	printf(" Divisao %2.f\n", divisao(a,b));
	printf(" Multiplicacao %2.f\n", multiplicacao(a,b));
}


