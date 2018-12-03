#include <stdio.h>

 int main(){
 	float compra, pagamento, troco;
	int nota1 = 0, nota10 = 0, nota100 = 0;
 	printf("Insira o valor da compra: R$ ");
	scanf_s("%f",&compra);
	printf("Insira o valor pago: R$ ");
	scanf_s("%f", &pagamento);
 	troco = pagamento - compra;
	printf("\nO troco eh de: R$ %.2f\n",troco);
	while(troco>=100) 
	{
		nota100 += 1;
		troco  -= 100;
	}
	while (troco >= 10) 
	{
		nota10 += 1;
		troco  -= 10;
	}
	while (troco >= 1) 
	{
		nota1 += 1;
		troco -= 1;
	}
 	printf("\nNotas de 100: %d\n", nota100);
	printf("Notas de 10: %d\n", nota10);
	printf("Notas de 1: %d\n\n", nota1);
     return 0;
}
