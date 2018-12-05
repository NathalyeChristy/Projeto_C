#include <stdio.h>

void calcularMatriz();

float mat[2][3];

void calcularMatriz()
{
	int i, j;
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[i][j] < 0)
			{
				mat[i][j] = mat[i][j] * -1;
			};
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.0f", mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
void lermat()
{
	int i,j;
	printf("informe os valores da matriz:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%f", &mat[i][j]);
		}
	}
	printf("\n\n");
	calcularMatriz();
}

void main()
{
	lermat();
	printf("\n");
	system("pause");
}
