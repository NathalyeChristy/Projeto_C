 #include <stdio.h>
 
 int main()
{
	int n1, n2, soma=0;
 	printf("Insira uma sequencia:\n");
	printf("De: ");
	scanf("");
	scanf("%d",&n1);
	printf("Ate: ");
	scanf("%d",&n2);
 	while (n1 >= n2) 
	{
		printf("Insira uma sequencia CORRETA:\n");
		printf("De: ");
		printf("Ate: ");
		scanf("%d", &n2);
	}
 	while (n1 != n2+1) 
	{
		if (n1 % 2 == 0) 
		{
			soma += n1;
		}
		n1++;
	}
 	printf("A soma dos numeros pares do da sequencia digitada eh: > %d <",soma);
 	printf("\n");
 	system("pause");
    return 0;
}
