#include <stdio.h>
#include <locale.h>

int main() {
	float	base_maior, base_menor, altura, area;
	
	printf("Informe o valor da base maior do trapezio: ");
	scanf("%f", &base_maior);
	printf("Informe o valor da base menor do trapezio: ");
	scanf("%f", &base_menor);
	printf("Informe o valor da altura do trapezio: ");
	scanf("%f", &altura);
	
	area = ((base_maior + base_menor) * altura) / 2;
	
	printf("A area do trapezio é: %.2f", area);
	return(0);
}
