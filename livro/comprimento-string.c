#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char 	nome[80];
	int		tamanho;
	printf("Digite o seu nome completo: \n");
	gets(nome);
	tamanho = strlen(nome);
	printf("O comprimento do nome é: %d\n", tamanho);
	return(0);
}
