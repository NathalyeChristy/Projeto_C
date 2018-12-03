#include <stdio.h>

int lerNum()
{
	int n = 0;
	printf("digite um numero entre 2 e 20:\n");
	scanf("%i", &n);
	
	while(n < 2 || n > 20)
	{
		printf("Numero invalido.\nTente novamente!\n");
		printf("Insira um numero entre 2 e 20:\n");
		scanf("%i", &n);
	}
	return n;
}

void printString(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		
		printf("%i", i+1);
	}
	n--;
	if(n > 0)
	{
		printf("\nX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}	
	if(n > 0)
	{
		printf("\nXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
	if(n > 0)
	{
		printf("\nXXXXXXXXXXXXXXXXXXX");
		for(i=0;i<n;i++)
		{
		
			printf("%i", i+1);
		}
		n--;
	}
}


void main()
{

	int n = lerNum();
	printString(n);
	printf("\n");
	system("pause");

}
