#include <stdio.h>
#include <locale.h>
#define TAM 20

struct cadastro {
	char	titulo[50];
	char	autor[30];
	char	editora[20];
	char	edicao[10];
	int		ano;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct	cadastro livro[TAM];
	int		i;
	for(i = 0; i < TAM; i++){
		printf("Digite o t�tulo do livro: ");
		gets(livro[i].titulo);
		fflush(stdin);
		printf("Digite o autor do livro: ");
		gets(livro[i].autor);
		fflush(stdin);
		printf("Digite a editora do livro: ");
		gets(livro[i].editora);
		fflush(stdin);
		printf("Digite a edi��o do livro: ");
		gets(livro[i].edicao);
		fflush(stdin);
		printf("Digite o ano do livro: ");
		scanf("%d", &livro[i].ano);
		fflush(stdin);
		system("cls");
	}
	printf("*********** LIVROS CADASTRADOS ***********\n");
	for(i = 0; i < TAM; i++){
		printf("T�tulo do livro: %s\n", livro[i].titulo);
		printf("Autor do livro: %s\n", livro[i].autor);
		printf("Editora do livro: %s\n", livro[i].editora);
		printf("Edi��o do livro: %s\n", livro[i].edicao);
		printf("Digite o ano do livro: %d\n\n", livro[i].ano);
	}
	return(0);
}

