/* Estrutura case em C */
#include <stdio.h>

int main()
{
	float	num1, num2, resultado;
	int op;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	printf("Escolha a operacao: \n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			resultado = num1 + num2;
			printf("A soma e: %.3f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subracao e: %.3f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("A multiplicacao e: %.3f\n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("A divisao e: %.3f\n", resultado);
			break;
		default:
			printf("Opcao invalida.\n");
			break;
	}
	return(0);
}
