#include <stdio.h>

int main()
{
	int	idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade < 16)
	{
		printf("Voto n�o obrigatorio!");
	} 
	else 
	{
		if ((idade < 18) || (idade > 65))
		{
			printf("Voto facultativo!");
		}
		else
		{
			printf("Voto obrigatorio!");
		}
	}
	return(0);
}
