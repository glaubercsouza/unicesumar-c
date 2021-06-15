/* Estrutura condicional simples em C */
/* incluindo o conte�do de stdio.h */
#include <stdio.h>
/* insere o conte�do do arquivo math, que tem a fun��o sqrt, c�lculo da raiz quadrada */
#include <math.h>

/* todo programa em C deve possuir essa linha */
int main()
{ /* delimita o in�cio das instru��es */
	int 	num;
	float 	raiz;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		raiz = sqrt(num);
		printf("\nA raiz quadrada e: %.3f", raiz);
	}
	return(0); /* retorno sem erro */
} /* fim do conjunto de instru��es da fun��o main */
