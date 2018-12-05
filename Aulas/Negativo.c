#include <stdio.h>

void main()
{
	int i, vet[5];
	printf("Digite 5 numeros no vetor:\n");
	for(i=0;i<5;i++)
	{
		scanf("%i", &vet[i]);
	}
	for(i=0;i<5;i++)
	{
		if(vet[i] < 0)
		{
			printf("Numeros negativos encontrados: %i\n", vet[i]);
		}
	}
	printf("\n");
	system("pause");
}
