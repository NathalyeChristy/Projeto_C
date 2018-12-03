# include <stdio.h>

int lerValor()
{
	int v = 0;
	printf("Insira um valor inteiro: ");
	scanf("%f", &v);
	return v;
}

int maior(a)
{
	int b = 0;
	int i = 0;
	for (i = 0; i < 50; i++)
	{
		if (b < a[i])
		{
			b = a;
		}
	}
	return b;
}

void main()
{
	int i = 0;
	int valor[50] = 0;
	for (i= 0; i <50; i++)
	{
	int valor[50] = lerValor();
	}
	int m = maior(valor);
	printf("%i", m);
}
