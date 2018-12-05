#include <stdio.h>

void main()
{
	float Chico = 1.50, Ze = 1.10;
	int ano;	
	while (Chico > Ze)
	{
		ano++;
		Chico = Chico + 0.02;
		Ze = Ze + 0.03;
	}
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("X                                         X\n");
	printf("X Ze sera maior que Chico daqui a %i anos X\n" , ano);
	printf("X                                         X\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	system("pause");	
}
