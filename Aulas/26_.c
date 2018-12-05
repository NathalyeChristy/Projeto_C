#include <stdio.h>

int lerIdade ()
{
	int idade = 0;
	printf("Insira sua idade :");
	scanf("%i", &idade);
	return idade;
}

int calculo(int idade)
{
	int dias = 0;
	dias = idade * 365;
	return dias;
}

void main()
{
	int idade = lerIdade();
	int dias = calculo(idade);
	printf("Voce ja viveu %i dias", dias);
	printf("\n\n");
	system ("pause");
}
