#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	nome[80], sobrenome[80];
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite o seu sobrenome: ");
	gets(sobrenome);
	strcat(nome, " ");
	strcat(nome, sobrenome);
	printf("Após concatenar as strings temos que nome é: %s\n", nome);
	if (strstr(sobrenome, nome) == 0){
		printf("Agora o sobrenome está contido na variável nome.\n");
	}
	strlwr(nome);
	printf("O nome em minúsculo é: %s\n", nome);
	strupr(nome);
	printf("O nome em maiúsculo é: %s\n", nome);
	return(0);
}
