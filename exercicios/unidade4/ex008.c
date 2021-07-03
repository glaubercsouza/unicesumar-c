#include <stdio.h>
#include <locale.h>
#define TAM 30

struct agenda {
	char	nome[30];
	char	telefone[15];
	char	email[30];
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct	agenda contato[TAM];
	int		i;
	for(i = 0; i < TAM; i++){
		printf("Digite o nome do contato: ");
		gets(contato[i].nome);
		fflush(stdin);
		printf("Digite o telefone do contato: ");
		gets(contato[i].telefone);
		fflush(stdin);
		printf("Digite o e-mail do contato: ");
		gets(contato[i].email);
		fflush(stdin);
		system("cls");
	}
	printf("*********** CONTATOS CADASTRADOS ***********\n");
	for(i = 0; i < TAM; i++){
		printf("Nome: %s\n", contato[i].nome);
		printf("Telefone: %s\n", contato[i].telefone);
		printf("E-mail: %s\n\n", contato[i].email);
	}
	return(0);
}

