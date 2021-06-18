#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int		num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	if ((num % 3 == 0) && (num % 7 == 0))
	{
		printf("O número %d é divisível por 3 e 7", num);
	}
	else
	{
		printf("O número %d não é divisível por 3 e 7", num);
	}
	return(0);
}
