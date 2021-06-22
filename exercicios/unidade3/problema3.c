#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		i, fatorial;
	printf("Escreva um número para calcular seu fatorial: ");
	scanf("%d", &fatorial);
	for(i = fatorial; i != 1; i--){
		printf("%d X ", i);
		fatorial = fatorial * (i-1);
	}
	printf("1 = %d", fatorial);
	return(0);
}
