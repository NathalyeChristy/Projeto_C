#include <stdio.h>

int lerOp ()
{
	int op = 0;
	printf("Digite o codigo do produto: ");
	scanf("%i", &op);
	return op;
}
float produtos (op)
{
	float total;
		switch(op)
		{
			case 1001:
				total = 5.32;
				break;
			case 1324:
				total = 6.45;
				break;
			case 6548:
				total = 2.67;
				break;
			case 987:
				total = 5.32;
				break;
			case 7623:
				total = 6.45;
				break;
			default:
				printf("Digite uma opcao valida...\n");
				break;
		}
	return total;
}
void main ()
{
	int op;
	do{
	op = lerOp();
	float total = total + produtos(op);
	printf("O total eh: R$%0.2f", total);
	printf("\n Digite 1 para continuar: ");
	scanf ("%i", &op);
	}
	while(op==1);
	if(op != 1)
	{
	 printf("Opcao invalida! Finalizando programa...\n");
	 system ("pause");
	}
}
