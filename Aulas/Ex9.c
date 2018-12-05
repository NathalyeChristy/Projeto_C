#include <stdio.h>

float lerNota()
{
	float nota = 0;
	printf("Informe a nota: ");
	scanf("%f", &nota);
	return nota;
}

float mediaAritmetica(float n1, float n2, float n3)
{
	float mediaA = 0;
	mediaA = n1 + n2 + n3;
	mediaA = mediaA / 3;
	return mediaA;
}

float mediaPonderada(float n1, float n2, float n3)
{
	float mediaP = 0;
	mediaP = (n1 * 3) + (n2 * 3) + (n3 * 4);
	mediaP = mediaP / 10;
	return mediaP;
}

float mediaHarmonica(float n1, float n2, float n3)
{
	float mediaH = 0;
	mediaH = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
	return mediaH;
}

void main()
{
	float nota1 = lerNota();
	float nota2 = lerNota();
	float nota3 = lerNota();
	float mediaA = mediaAritmetica(nota1, nota2, nota3);
	float mediaP = mediaPonderada(nota1, nota2, nota3);
	float mediaH = mediaHarmonica(nota1, nota2, nota3);
	printf("A media Aritmetica eh: %0.2f", mediaA);
	printf("\nA media Ponderada  eh: %0.2f", mediaP);
	printf("\nA media Harmonica  eh: %0.2f", mediaH);
	printf("\n");
	system ("pause");
	}
