# include <stdio.h>

float lerVelocidade()
{
	float v = 0;
	printf("Informe a velocidade media da viagem: ");
	scanf("%f", &v);
	return v;
}

float lerTempo()
{
	float t = 0;
	printf("Informe o tempo gasto na viagem (Horas): ");
	scanf("%f", &t);
	return t;
}

float calculoDistancia(float a, float b)
{
	float d = 0;
	d = a * b;
	return d;
}

float calculoLitros_Usados(float a)
{
	float b = 0;
	b = a / 12;
	return b;
}

void main()
{
	float Velocidade = lerVelocidade();
	float Tempo = lerTempo();
	float Distancia = calculoDistancia(Velocidade, Tempo);
	float Litros_Usados = calculoLitros_Usados(Distancia);
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("A velocidade media da viagem foi: %0.2f KM/H", Velocidade);
	printf("\nO tempo gasto na viagem foi : %0.2f Horas", Tempo);
	printf("\nO total de combustivel gasto foi: %0.2f Litos", Litros_Usados);
	printf("\n");
	system("pause");
}
