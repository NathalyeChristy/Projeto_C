// Aula2410_Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>


int valor() {

	int val = 0;

	printf_s("Valor que deseja dividir? ");
	scanf_s("%i", &val);

	return val;

}
void swit() {

	switch ( valor() % 5)
	{
	case 1:
		printf("Este numero é divisivel por 5");
		break;
	case 2: 
		printf("Este numero tem como resto 2 na divisao por 5 \n");
		break;
	case 3:
		printf("Este numero tem como resto 3 na divisao por 5 \n");
		break;
	
	default:

		printf("Digite 0 para sair!");
		break;
	}

}

int main()
{
	 swit();

	 system("pause");
	 return 0;
}

