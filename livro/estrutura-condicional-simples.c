/* Estrutura condicional simples em C */
/* incluindo o conteúdo de stdio.h */
#include <stdio.h>
/* insere o conteúdo do arquivo math, que tem a função sqrt, cálculo da raiz quadrada */
#include <math.h>

/* todo programa em C deve possuir essa linha */
int main()
{ /* delimita o início das instruções */
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
} /* fim do conjunto de instruções da função main */
