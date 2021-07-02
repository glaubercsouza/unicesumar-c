#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	palavra[30];
	int		imp, i;
	
	printf("Olá, digite uma palavra: ");
	scanf("%s", palavra);
	printf("Quantas vezes deseja imprimir a palavra na tela?\n");
	scanf("%d", &imp);
	for (i = 0; i < imp; i++){
		printf("%d - %s\n", i + 1, palavra);
	}
	return(0);
}
