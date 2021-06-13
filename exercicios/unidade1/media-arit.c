#include <stdio.h>

int main() {
	float 	num1, num2, num3, num4, media;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &num1);
	printf("Insira o segundo numero: ");
	scanf("%f", &num2);
	printf("Insira o terceiro numero: ");
	scanf("%f", &num3);
	printf("Insira o quarto numero: ");
	scanf("%f", &num4);
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	printf("A media aritmetica entre os quatro numeros inseridos e %.2f", media);
	return(0);
}
