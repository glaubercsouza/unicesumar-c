#include <stdio.h>
#include <locale.h>

int main()
{
	int	maior, menor, num;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	printf("Digite o terceiro n�mero: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	printf("Digite o quarto n�mero: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	printf("Digite o quinto n�mero: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	
	printf("\nO maior n�mero �: %d", maior);
	printf("\nO menor n�mero �: %d", menor);
	return(0);
}
