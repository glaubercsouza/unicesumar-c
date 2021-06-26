#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	frase[50];
	int		vezes, i;
	printf("Digite uma frase de até 50 caracteres.\n");
	gets(frase);
	printf("Quantas vezes deseja repetir essa frase?\n");
	scanf("%d", &vezes);
	for(i = 1; i != vezes; i++){
		printf("%s \n", frase);
	}
	return(0);
}
