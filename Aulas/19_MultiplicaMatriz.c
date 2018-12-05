#include <stdio.h>

void repeticao();
float soma(float, float);
void exercicio19();

int main()
{
	exercicio19();
//	_getch();
	system("pause");
	return 0;
}

void exercicio19()
{
	int mat[2][3], i, j, l, c, f, resl[3], resc[2];
	printf("Informe todos os valores para a matriz: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha:%i, Coluna:%i ", i, j);
			scanf("%i", &mat[i][j]);
		}
	}
	printf("Qual linha você quer multiplicar? ");
	scanf("%i", &l);
	printf("Qual vai ser o fator multiplicador? ");
	scanf("%i", &f);
	for (i = 0; i < 3; i++)
		resl[i] = mat[l][i] * f;
	printf("Os valores resultantes foram: ");
	for (i = 0; i < 3; i++)
		printf("%i ", resl[i]);
	printf("\n");
	printf("Qual coluna você quer multiplicar? ");
	scanf("%i", &c);
	printf("Qual vai ser o fator multiplicador? ");
	scanf("%i", &f);
	for (i = 0; i < 2; i++)
		resc[i] = mat[i][c] * f;
	printf("Os valores resultantes foram: ");
	for (i = 0; i < 2; i++)
		printf("%i ", resc[i]);
	printf("\n");
}

void repeticao()
{
	int i;
	for (i = 0; i < 10; i++)
		printf("oi");
}

float soma(float a, float b)
{
	return a + b;
}
