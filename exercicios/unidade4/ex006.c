#include <stdio.h>
#include <locale.h>
#define MAX 5

struct	cadastro {
	char	nome[30];
	float	nota[4];
	float	media;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct 	cadastro aluno[MAX];
	struct	cadastro troca;
	int		i, j;
	float	soma;
	
	for(i = 0; i < MAX; i++){
		soma = 0;
		printf("Digite o nome do aluno %d: ", i + 1);
		scanf("%s", &aluno[i].nome);
		for(j = 0; j < 4; j++){
			printf("Digite a nota %d: ", j + 1);
			scanf("%f", &aluno[i].nota[j]);
			soma += aluno[i].nota[j];
		}
		aluno[i].media = soma / 4;
		printf("\n");
	}
	for(i = 0; i < MAX - 1; i++){
		for(j = i + 1; j < MAX; j++){
			if(aluno[i].media < aluno[j].media){
				troca = aluno[i];
				aluno[i] = aluno[j];
				aluno[j] = troca;
			}
		}
	}
	for(i = 0; i < MAX; i++){
		printf("Nome do aluno: %s\n", aluno[i].nome);
		printf("Média do aluno: %.2f\n\n", aluno[i].media);
	}
}
