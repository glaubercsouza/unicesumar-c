#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int 	numero, i;
	float	soma, divisor;
	printf("Digite um número: ");
	scanf("%d", &numero);
	for(i = 1; i <= numero; i++){
		divisor = i;
		soma = soma + (1 / divisor);
	}
	printf("\nO resultado é %.2f", soma);
}
