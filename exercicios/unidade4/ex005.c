#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		i, j;
	int		matrizA[5][5];
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("Insira o valor da linha %d, coluna %d: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
}
