#include <stdio.h>
#include <math.h>

int main() {
	int num, quad, raiz;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &num);
	
	quad = pow(num,2);
	raiz = sqrt(num);
	
	printf("O quadrado de %d e %d e a raiz quadrada de %d e %d", num, quad, num, raiz);
	return(0);
}
