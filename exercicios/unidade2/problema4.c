#include <stdio.h>

int main()
{
	float	altura, peso;
	char	sexo;
	
	printf("Digite o seu sexo[M/F]: ");
	scanf("%c", &sexo);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	if ((sexo == "f") || (sexo == "F"))
	{
		peso = (62.1 * altura) - 44.7;
	}
	else
	{
		peso = (72.7 * altura) - 58;	
	}
	printf("Sexo: %c\n", sexo);
	printf("Altura: %.2f\n", altura);
	printf("Peso ideal: %.2f\n", peso);
	return(0);
}
