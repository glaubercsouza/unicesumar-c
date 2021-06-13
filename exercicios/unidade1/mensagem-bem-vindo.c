#include <stdio.h>

int main() {
	char	name[30];
	
	printf("Escreva o seu nome: ");
	scanf("%s", &name);
	printf("Bem vindo(a) a disciplina de Algoritmos e Logica de Programacao II, %s! ", name);
	return(0);
}
