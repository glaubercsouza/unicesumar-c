#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int		num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	if ((num % 3 == 0) && (num % 7 == 0))
	{
		printf("O n�mero %d � divis�vel por 3 e 7", num);
	}
	else
	{
		printf("O n�mero %d n�o � divis�vel por 3 e 7", num);
	}
	return(0);
}
