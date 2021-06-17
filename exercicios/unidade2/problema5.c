#include <stdio.h>
#include <locale.h>

int main()
{
	int		opcao;
	float 	calorias;
	setlocale(LC_ALL, "Portuguese");
	printf("Escolha um prato tipico:\n1 - Italiano\n2 - Japonês\n3 - Salvadorenho\n");
	scanf("%d", &opcao);
	switch (opcao)
	{
		case 1:
			calorias = calorias + 750;
			break;
		case 2:
			calorias = calorias + 324;
			break;
		case 3:
			calorias = calorias + 545;
			break;
	}
	printf("Escolha uma bebida:\n1 - Chá \n2 - Suco de laranja \n3 - Refrigerante\n");
	scanf("%d", &opcao);
	switch (opcao)
	{
		case 1:
			calorias = calorias + 30;
			break;
		case 2:
			calorias = calorias + 80;
			break;
		case 3:
			calorias = calorias + 90;
			break;
	}
	printf("Quantidade de calorias ingeridas: %.0f", calorias);
	return(0);
}
