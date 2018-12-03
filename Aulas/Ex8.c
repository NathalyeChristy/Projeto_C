#include <stdio.h>

/*funçao para receber a idade do usuário*/
int lerIdade()
{
	int n = 0;
	printf("Informe a Idade: ");
	scanf("%i", &n);
	return n;
}

/*funçao para mostrar a categoria do nadador*/
void categoria(int i)
{
	switch(i)
	{
		case 5 ... 7:
			printf("A sua categoria eh: Infantil A");
		break;
		case 8 ... 10:
			printf("A sua categoria eh: Infantil B");
		break;
		case 11 ... 13:
			printf("A sua categoria eh: Juvenil A");
		break;
		case 14 ... 17:
			printf("A sua categoria eh: Juvrnil B");
		break;
		case 18 ... 150:
			printf("A sua categoria eh: Adulto");
		break;
		default:
			printf("Digite uma Idade valida e real!");
		break;
	}
}

void main()
{
	int idade = 0;
	printf("DESCUBRA SUA CATEGORIA NA NATACAO!\n");
	idade = lerIdade();
	categoria(idade);
	printf("\n");
	system ("pause");
}
