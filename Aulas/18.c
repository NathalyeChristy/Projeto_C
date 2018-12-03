#include <stdio.h>

int lerValor()
{
	int n= 0;
	printf("Informe um numero: ");
	scanf("%d", &n);
	return n;
}

int main() 
{
	int x = lerValor();
    int c = 0;
	int y = 0;

    for (c=1; c<=x; c++) {
        for (y=1; y<=c; y++)
            printf("%d", y);
        	printf("\n");
    }

    for (c=c-2; c>0; c--) {
        for (y=1; y<=c; y++)
            printf("%d", y);
        	printf("\n");
    }

    printf("\n");
	system("pause");
}
