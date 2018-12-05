#include <stdio.h>

void main()
{
	int filhos = 0,med_filho = 0, f,med_sal,menor = 0;
	float sal = 0, s = 0, maior = 0, porcen = 0;
	while(s >= 0)
	{
		printf("Digite o salario: ");
		scanf("%f", &s);
		if(s < 0)
		{
			break;
		}
		med_sal++;
		if(s <= 100)
		{
			menor = menor + 1;
		}
		if(maior < s)
		{
			maior = s;
		}
		sal = sal + s;
		
		printf("\nDigite o numero de filhos: ");
		scanf("%i", &f);
		filhos = filhos + f;
		med_filho++;	
		printf("\nproxima pessoa\n\n");
	} 	
	printf("\nmedia: %i, menor: %i\n", med_sal, menor);
	printf("media de salario: %.2f", sal/med_sal);
	printf("\nmedia do numero de filhos: %i", filhos/med_filho);
	printf("\nmaior salario: %.2f", maior);
	printf("\npercentual de pessoas com salario ate cem reais: %i",(( (menor*100) / med_sal)));
	printf("\n");
	system("pause");	
}
