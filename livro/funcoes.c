#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(){
	float	num1, num2, total;
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	total = num1 + num2;
	printf("A soma � %.2f\n", total);
	return(0);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	soma();
	return(0);
}
