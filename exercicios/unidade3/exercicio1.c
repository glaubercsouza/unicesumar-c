#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		numero, maior, menor, contador, pares, impares;
	float	somaNumero, media;
	printf("Escreva um número: ");
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
		printf("Escreva um número: ");
		scanf("%d", &numero);
	}
	media = somaNumero / contador;
	printf("A média dos valores digitados é %.2f\n", media);
	printf("A maior número digitado foi %d\n", maior);
	printf("O menor número digitado foi %d\n", menor);
	printf("A quantidade de números pares digitados é %d\n", pares);
	printf("A quantidade de números ímpares digitados é %d\n", impares);
	return(0);
}
