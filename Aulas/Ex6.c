# include <stdio.h>

int lerNum ()
{
	int num = 0;
	printf("Insira um numero inteiro: ");
	scanf("%i", &num);
	return num;
}

int calculo(int n)
{
	int i = 0;
	int soma = 0;
	while (i <= n) {
    	soma = soma + i;
    	i = i + 1;
  	}
  	return soma;
}

void main()
{
	int n = lerNum();
	int total = calculo(n);
	printf("A soma dos termos eh: %i", total);
	printf("\n");
	system ("pause");
}
