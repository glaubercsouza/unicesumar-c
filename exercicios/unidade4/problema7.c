#include <stdio.h>
#define TAM 5
int main(){
	float	media[TAM];
	float	notas[TAM][4];
	float 	somat, mediat, soma;
	int		i, j;
	
	somat = 0;
	mediat = 0;
	for(i = 0; i < TAM; i++){
		soma = 0;
		for(j = 0; j < 4; j++){
			printf("Informe a nota %d do aluno %d: ", j + 1, i + 1);
			scanf("%f", &notas[i][j]);
			soma = soma + notas[i][j];
		}
		media[i] = soma / 4;
		somat = somat + media[i];
	}
	mediat = somat / TAM;
	for(i = 0; i < TAM; i++){
		printf("A média do aluno %d é: %.2f\n", i, media[i]);
	}
	printf("A média da turma é: %.2f\n", mediat);
	return(0);
}
