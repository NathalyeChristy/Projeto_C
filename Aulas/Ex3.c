#include <stdio.h>

int lerDias()
{
	int n = 0;
	printf("Insira o numero de dias: ");
	scanf("%i", &n);
	return n;
}

int calculoAnos(d)
{
	int an = 0;
	an = d / 365;
	return an;
}

int calculoMeses(m)
{
	int ms = 0;
	ms = m / 30;
	return ms;
}
int main()
{
	int dias = lerDias();
	int meses = calculoMeses(dias);
	int anos = calculoAnos(dias);
	printf("Voce viveu em dias :%i", dias);
	printf("\nVoce vive em meses :%i", meses);
	printf("\nVoce viveu em anos :%i", anos);
	printf("\n");
	system("pause");
}
