/* Estrutura condicional composta em C */
#include <stdio.h>
#include <math.h>

int main()
{
	int 	quadrado, num;
	float	raiz;
	
	printf ("\nDigite um numero inteiro: ");
	scanf ("%d", &num);
	if (num % 2 == 0)
	{
		raiz = sqrt(num);
		printf ("\nO numero e par.");
		printf ("\nA raiz quadrada e: %.3f", raiz);
	}
	else
	{
		quadrado = num * num;
		printf ("\nO numero e impar.");
		printf ("\nO numero ao quadrado e: %d", quadrado);
	}
	return(0);
}
