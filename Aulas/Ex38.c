#include <stdio.h>

struct Horario 
{
	int horas;
	int minutos;
	int segundos;
}; 
struct Horario h;

void main()
{
	printf("Digite os minutos: ");
	scanf("%i", &h.minutos);
	while(h.segundos >= 60)
	{
		h.minutos = h.minutos + 1;
		h.segundos = h.segundos - 60;
	}
	while(h.minutos >= 60)
	{
		h.horas = h.horas + 1;
		h.minutos = h.minutos - 60;
	}
	printf("Horario: %i horas, %i minutos e %i segundos.", h.horas,h.minutos,h.segundos);
	printf("\n");
	system("pause");
}
