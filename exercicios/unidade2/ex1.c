#include <stdio.h>
#include <locale.h>

int main()
{
	int	maior, menor, num;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	printf("Digite o segundo número: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	printf("Digite o terceiro número: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	printf("Digite o quarto número: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	printf("Digite o quinto número: ");
	scanf("%d", &num);
	if (num > maior)
	{
		maior = num;
	}
	if (num < menor)
	{
		menor = num;
	}
	
	printf("\nO maior número é: %d", maior);
	printf("\nO menor número é: %d", menor);
	return(0);
}
