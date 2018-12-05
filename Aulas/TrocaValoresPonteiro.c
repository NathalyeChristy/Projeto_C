#include <stdio.h>

float lerValor()
{
	float v = 0;
	printf("Insira um valor para a variavel: ");
	scanf("%f", &v);
	return v;
}

void troca(float *a, float *b)
{
	float t = *a;
	*a = *b;
	*b = t;
}

void main ()
{
	float A = lerValor();
	float B = lerValor();
	troca(&A, &B);
	printf("O valor das variaveis A e B foram trocadas, seus valores ficaram: ");
	printf("\nA = %f", A);
	printf("\nB = %f", B);
	printf("\n");
	system("pause");
}
