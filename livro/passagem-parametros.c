#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float n1, float n2){
	float	total;
	total = n1 + n2;
	return(total);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float	num1, num2, resposta;
	system("cls");
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	resposta = soma(num1, num2);
	printf("A soma é igual a %.2f\n", resposta);
}
