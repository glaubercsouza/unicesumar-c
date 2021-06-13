#include <stdio.h>
#include <math.h>
#define	pi	3.14159

int main() {
	float	raio;
	
	printf("Escreva o valor do raio do circulo: ");
	scanf("%f", &raio);
	printf("A area do circulo e %.2f", pi * pow(raio,2));
	printf("O perimetro do circulo e %.2f", 2 * pi * raio);
	return(0);
}
