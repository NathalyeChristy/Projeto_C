#include <stdio.h>

int lerValor()
{
	int val = 0;
	printf("Insira um valor inteiro: ");
	scanf("%i", &val);
	return val;
}

void main ()
{
	int A = lerValor();
	int B = lerValor();
	int C = A;
	int D = B;
	A = D;
	B = C;
	printf("O valor das Variaveis A e B foram trocados e os novos valores ficaram:\n");
	printf("A = %i", A);
	printf("\nB = %i", B);
	printf("\n");
	system ("pause");
}
