// ponteiros1411.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "stdio.h"
#include "stdlib.h"


float valor( )
{
	float val = 0;

	printf("Informe o valor da variavel: \n");
	scanf_s("%f", &val);

	return val;
}
void troc(float *a, float *b)
{
	float t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	float a = valor();
	float b = valor();
	troc(&a, &b);
	printf("O valor das variaveis sao: ");
	printf("\nA: %2.f", a);
	printf("\nB: %2.f\n", b);

	printf("\n\n\n\n---------------------------------------------------------------\n\n\n");

	system("pause");

}
struct carro
{
	char modelo[30];
	char marca[10];
	int anofabricado;
	char cor[20];
	char placa[7];
};
int main() {

	printf("Modelo:   ");
	scanf_s("")
	printf("Marca: ");

	printf("Ano Fabricado: ");

	printf("Cor: ");

	printf("Placa: ");
}






