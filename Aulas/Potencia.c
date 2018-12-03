#include <stdio.h>
#include <math.h>
int lerBase ()
{
	int num = 0;
	printf("Insira o numero base: ");
	scanf("%i", &num);
	return num;	
}

int lerExpoente ()
{
	int num = 0;
	printf("Insira um expoente positivo: ");
	scanf("%i", &num);
	return num;	
}

int calculo (int n1, int n2)
{
	int x = (pow(n1, n2));
	return x;
}
int main ()
{
	int base = lerBase();
	int expoente = lerExpoente();
	if(expoente < 0)
	{
		printf("\nExpoente negativo! Por favor utilize um numero positivo");
	}
	else
	{
	int result = calculo(base, expoente);
	printf("\nO resultado da potencia eh: %i", result);
	}
	printf("\n");
	system("pause");
}


