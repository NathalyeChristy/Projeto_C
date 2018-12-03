#include <stdio.h>

int lerValor()
{
	int n = 0;
	printf("Insira um numero inteiro e positivo:");
	scanf("%i", &n);
	return n;
}

void exibir(n)
{
	int i = 0;
	int impar = 1;
	
	printf("Os %d primeiro numeros impares sao: \n", n);
	
	while (i < n)
	{
		printf("%d\n", impar);
		impar = impar + 2;
		i = i + 1;
	}	
}

void main()
{
	int n = lerValor();
	exibir(n);
	printf("\n");
	system("pause");
}
