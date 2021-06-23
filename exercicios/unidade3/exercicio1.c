#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		numero, maior, menor, contador, pares, impares;
	float	somaNumero, media;
	printf("Escreva um n�mero: ");
	scanf("%d", &numero);
	while(numero != 0){
		contador++;
		if (numero > maior){
			maior = numero;
		} else if (numero < menor) {
			menor = numero;
		}
		somaNumero += numero;
		if (numero % 2 == 0){
			pares++;
		} else {
			impares++;
		}
		printf("Escreva um n�mero: ");
		scanf("%d", &numero);
	}
	media = somaNumero / contador;
	printf("A m�dia dos valores digitados � %.2f\n", media);
	printf("A maior n�mero digitado foi %d\n", maior);
	printf("O menor n�mero digitado foi %d\n", menor);
	printf("A quantidade de n�meros pares digitados � %d\n", pares);
	printf("A quantidade de n�meros �mpares digitados � %d\n", impares);
	return(0);
}
