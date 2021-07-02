#include <stdio.h>
#include <locale.h>
#define mat 3

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		i, j;
	int		matrizA[mat][mat], matrizB[mat][mat];
	printf("******** MATRIZ A ********\n");
	for(i = 0; i < mat; i++){
		for(j = 0; j < mat; j++){
			printf("Insira o valor da linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
	printf("\n******** MATRIZ B ********\n");
	for(i = 0; i < mat; i++){
		for(j = 0; j < mat; j++){
			printf("Insira o valor da linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}
	}
	printf("\n\n******** MATRIZ A ********\n");
	for(i = 0; i < mat; i++){
		printf("\n");
		for(j = 0; j < mat; j++){
			printf("%d \t", matrizA[i][j]);
		}
	}
	printf("\n\n******** MATRIZ B ********\n");
	for(i = 0; i < mat; i++){
		printf("\n");
		for(j = 0; j < mat; j++){
			printf("%d \t", matrizB[i][j]);
		}
	}
	printf("\n\n******** SOMA DAS MATRIZES ********\n");
	for(i = 0; i < mat; i++){
		printf("\n");
		for(j = 0; j < mat; j++){
			printf("%d \t", matrizA[i][j] + matrizB[i][j]);
		}
	}
	printf("\n\n******** SUBTRAÇÃO DAS MATRIZES ********\n");
	for(i = 0; i < mat; i++){
		printf("\n");
		for(j = 0; j < mat; j++){
			printf("%d \t", matrizA[i][j] - matrizB[i][j]);
		}
	}
	return(0);
}
