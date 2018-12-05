#include <stdio.h>

void tabuada()
{
	int i= 0, j = 0, n[20];
	while(i < 20)
	{
		printf("\ndigite vinte valores:\n");
		scanf("%i", &n[i]);
		while(j <= n[i])
		{
			printf("%i x %i = %i\n", n[i],  j, n[i]*j);
			j++;
		}
		j= 0;
		i++;
	}
}

void main()
{
	tabuada();
	printf("\n");
	system("pause");
}
