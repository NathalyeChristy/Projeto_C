#include <stdio.h>
 int main(){
 	int mat[3][3], transposta[3][3], i, j;
	printf("Informe todos os valores para a Matriz:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Linha: %i, Coluna: %i-> Valor: ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	// atribuindo o valor da matriz para a matriz transpostas invertendo as linhas e colunas
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			transposta[j][i] = mat[i][j];// invertendo as posição das linhas e colunas da 'transpostas'
		}
	}
	//exibindo a matriz transposta
	printf("\nMatriz Transposta:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%i ", transposta[i][j]);
		}
		printf("\n");
	}
 	printf("\n");
	system("pause");
    return 0;
}
