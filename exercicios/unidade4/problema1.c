#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 20

struct livro{
	int		codigo;
	char	titulo[50];
	char	autor[30];
	char	area[30];
	int		ano;
	char	editora[30];
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	struct	livro ficha[TAM];
	struct	livro troca;
	int 	busca, i, j, acha, op;
	
	op = 0;
	while (op != 5){
		printf("1 - Cadastrar os livros\n");
		printf("2 - Imprimir os livros cadastrados\n");
		printf("3 - Pesquisar livros por código\n");
		printf("4 - Ordenar os livros por ano\n");
		printf("5 - Sair\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &op);
		fflush(stdin);
		if(op == 1){
			system("cls");
			for(i = 0; i < TAM; i++){
				printf("Digite o código do livro da posição %d: ", i + 1);
				scanf("%d", &ficha[i].codigo);
				fflush(stdin);
				printf("Digite o título do livro: ");
				scanf("%50[^\n]s", &ficha[i].titulo);
				fflush(stdin);
				printf("Digite o nome do autor: ");
				scanf("%30[^\n]s", &ficha[i].autor);
				fflush(stdin);
				printf("Digite a área do livro: ");
				scanf("%30[^\n]s", &ficha[i].area);
				fflush(stdin);
				printf("Digite o ano: ");
				scanf("%d", &ficha[i].ano);
				fflush(stdin);
				printf("Digite o nome da editora: ");
				scanf("%30[^\n]s", &ficha[i].editora);
				fflush(stdin);
			}
		}else{
			if(op == 2){
				system("cls");
				for(i = 0; i < TAM; i++){
					printf("\nCÓDIGO: %d\n", ficha[i].codigo);
					printf("\nTÍTULO: %s\n", ficha[i].titulo);
					printf("\nAUTOR: %s\n", ficha[i].autor);
					printf("\nÁREA: %s\n", ficha[i].area);
					printf("\nANO: %d\n", ficha[i].ano);
					printf("\nEDITORA: %s\n\n", ficha[i].editora);
				}
			}else{
			if(op == 3){
				system("cls");
				printf("Digite o código que deseja buscar: ");
				scanf("%d", &busca);
				i = 0;
				acha = 0;
				while((i < TAM) && (acha == 0)){
					if(ficha[i].codigo == busca){
						acha = 1;
					}else{
						i++;
					}
					if (acha == 1){
						printf("\nCÓDIGO: %d\n", ficha[i].codigo);
						printf("\nTÍTULO: %s\n", ficha[i].titulo);
						printf("\nAUTOR: %s\n", ficha[i].autor);
						printf("\nÁREA: %s\n", ficha[i].area);
						printf("\nANO: %d\n", ficha[i].ano);
						printf("\nEDITORA: %s\n\n", ficha[i].editora);
					}else{
						printf("\nRegistro não encontrado");
					}
				}
			}else{
				if(op == 4){
					system("cls");
					for (i = 0; i < TAM - 1; i++){
						for (j = i + 1; j < TAM; j++){
							if(ficha[i].ano > ficha[j].ano){
								troca = ficha[i];
								ficha[i] = ficha[j];
								ficha[j] = troca;
							}
						}
					}
					for (i = 0; i < TAM; i++){
						printf("\nCÓDIGO: %d\n", ficha[i].codigo);
						printf("\nTÍTULO: %s\n", ficha[i].titulo);
						printf("\nAUTOR: %s\n", ficha[i].autor);
						printf("\nÁREA: %s\n", ficha[i].area);
						printf("\nANO: %d\n", ficha[i].ano);
						printf("\nEDITORA: %s\n\n", ficha[i].editora);
					}
				}
			}
		}
	}
		}
	return(0);
}
