#include <stdio.h>
#include <math.h>

float lerPontos()
{
	float valor = 0;
	printf("Insira um numero real: ");
	scanf("%f", &valor);
	return valor;
}

float calculo(float x1, float x2, float y1, float y2)
{
	float result = 0;
	result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return result;
}
float main()
	{
	printf("Insira o valor de x e y do primeiro ponto:\n");
	
	float x1 = lerPontos();
	float y1 = lerPontos();
	
	printf("Insira o valor de x e y do segundo ponto:\n");
	
	float x2 = lerPontos();
	float y2 = lerPontos();
	
	printf("A distancia entre os pontos (%.03f, %.03f) e (%.03f, %.03f) eh: %.03f", x1, y1, x2, y2, calculo(x1, y1, x2, y2));
	printf("\n");
	system("pause");
}
