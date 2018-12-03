#include <stdio.h>

float lerNota()
{
	float n = 0;
	printf("Insira a nota: ");
	scanf("%f", &n);
	return n;
}
float calculo(float n1, float n2, float n3)
{
	float x = 0;
	float y = 0;
	float x1 = 0;
	float x2 = 0;
	float x3 = 0;
	x1 = n1 * 2;
	x2 = n2 * 3;
	x3 = n3 * 5;
	y = x1 + x2 + x3;
	x =  y / 10;
	return x;
}

int main()
{
	float nota1 = lerNota();
	float nota2 = lerNota();
	float nota3 = lerNota();
	float media = calculo(nota1, nota2, nota3);
	printf("A media ponderada das notas eh: %0.01f", media);
	printf("\n");
	system("pause");	
}
