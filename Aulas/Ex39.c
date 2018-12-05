#include <stdio.h>

struct Pessoas
{
	char nome[15];
	float altura;
	float peso;
	long int cpf;
	char sexo[1];
};
struct Pessoas p[3];

void main()
{
	int i, verificacao;
	long int busca;	
	for(i=0;i<3;i++)
	{
		printf("Digite seu nome:\n");
		fflush(stdin);
		fgets(p[i].nome , 15, stdin);		
		printf("Digite sua altura:\n");
		scanf("%f", &p[i].altura);		
		printf("Digite seu peso:\n");
		scanf("%f", &p[i].peso);		
		printf("Digite seu cpf:\n");
		fflush(stdin);
		scanf("%li", &p[i].cpf);		
		printf("Digite seu sexo:\n");
		fflush(stdin);
		scanf("%c", &p[i].sexo);		
		printf("\n\n\n Proxima pessoa \n\n\n");
	}	
	printf("Digite o cpf para buscar:\n");
	scanf("%li", &busca);	
	for(i=0;i<16;i++)
	{
		if( busca == p[i].cpf)
		{
			printf("\nNome %s", p[i].nome);
			printf("\nAltura %.2f", p[i].altura);
			printf("\nPeso %.2f", p[i].peso);
			printf("\nCPF %li", p[i].cpf);
			printf("\nSexo %s", p[i].sexo);
			printf("\nIMC %f", p[i].peso / (p[i].altura * p[i].altura));
		}
	}	
	printf("\n");
	system("pause");
}
