#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	data[10];
	int		pedido;
	float	precoUnit, precoTot, total, qtd;
	printf("Insira o n�mero do pedido: ");
	scanf("%d", &pedido);
	while(pedido != 0){
		printf("Insira a data do pedido: ");
		scanf("%s", data);
		printf("Informe o pre�o unit�rio: R$ ");
		scanf("%f", &precoUnit);
		printf("Informe a quantidade: ");
		scanf("%f", &qtd);
		precoTot = precoUnit * qtd;
		total += precoTot;
		printf("\nInsira o n�mero do pedido: ");
		scanf("%d", &pedido);
	}
	printf("\nO valor total do pedido � de R$ %.2f", total);
	return(0);
}
