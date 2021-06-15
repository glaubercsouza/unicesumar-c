#include <stdio.h>

int main()
{
	int		idade;
	char	nome[30];
	
	printf("Digite o seu nome: \n");
	scanf("%s", &nome);
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	printf("Nome: %s\n", nome);
	printf("Idade: %d anos\n", idade);
	if (idade <= 18)
	{
		printf("Valor da mensalidade: R$ 50,00\n");
	}	
	else 
	{
		if ((idade > 18) && (idade <= 29))
		{
			printf("Valor da mensalidade: R$ 70,00\n");
			}	
			else
			{
				if ((idade > 29) && (idade <= 45))
				{
					printf("Valor da mensalidade: R$ 90,00\n");
				}
				else{
					if (( idade > 45) && (idade <= 65))
					{
						printf("Valor da mensalidade: R$ 130,00\n");
					}
					else{
						printf("Valor da mensalidade: R$ 170,00\n");
					}
				}
			}
	}
	return(0);
}
