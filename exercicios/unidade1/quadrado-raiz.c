#include <stdio.h>
#include <math.h>

int main() {
	int num, quad, raiz;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &num);
	
	printf("O quadrado de %d e %.2f e a raiz quadrada de %d e %.2f", num, pow(num,2), num, sqrt(num));
	return(0);
}
