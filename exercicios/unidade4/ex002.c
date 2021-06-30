#include <stdio.h>
#include <locale.h>
#define	TAM	3

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		vetor[TAM];
	int		i, j, troca;
	
	for(i = 0; i < TAM; i++){
		printf("Digite a posição %d do vetor: ", i + 1);
		scanf("%d", &vetor[i]);	
	}
	for(i = 0; i < TAM - 1; i++){
		for(j = i + 1; j < TAM; j++){
			if (vetor[i] < vetor[j]){
				troca = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = troca;
			}
		}
	}
	printf("\n***************************\n");
	printf("VETOR EM ORDEM DECRESCENTE\n");
	printf("***************************\n");
	for(i = 0; i < TAM; i++){	
		printf("%d - ", vetor[i]);
	}
	return(0);
}
