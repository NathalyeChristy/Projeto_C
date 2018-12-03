#include <stdio.h>

int main()
{
	int idade, maior, olho, cabelo, verify = 0;
	char sexo;
	while(idade != -1)
	{
		printf("Digite a idade:\n");
		scanf("%i", &idade);
		if(idade == -1)
		{
			break;
		}
		if(maior < idade)
		{
			maior = idade;
		}
		printf("Digite o sexo:\n");
		fflush(stdin);
		scanf("%c", &sexo);
		printf("Digite a cor dos olhos:\n");
		scanf("%i", &olho);
		printf("Digite a cor dos cabelos:\n");
		scanf("%i", &cabelo);
		printf("\n\n>>>proxima pessoa<<<\n\n");		
		if(sexo == 'f' || sexo == 'F')
		{
			if(idade > 17 && idade < 35)
			{
				if(olho == 2 && cabelo == 1)
				{
					verify++;
				}
			}
		}
	}	
	printf("Maior idade: %i\n", maior);
	printf("Pessoas especificadas na pesquisa: %i", verify);
	printf("\n");
	system("pause");
}
