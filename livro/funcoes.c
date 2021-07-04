#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(){
	float	num1, num2, total;
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	total = num1 + num2;
	printf("A soma é %.2f\n", total);
	return(0);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	soma();
	return(0);
}
