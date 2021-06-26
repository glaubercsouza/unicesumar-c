#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	data[10];
	int		pedido;
	float	precoUnit, precoTot, total, qtd;
	printf("Insira o número do pedido: ");
	scanf("%d", &pedido);
	while(pedido != 0){
		printf("Insira a data do pedido: ");
		scanf("%s", data);
		printf("Informe o preço unitário: R$ ");
		scanf("%f", &precoUnit);
		printf("Informe a quantidade: ");
		scanf("%f", &qtd);
		precoTot = precoUnit * qtd;
		total += precoTot;
		printf("\nInsira o número do pedido: ");
		scanf("%d", &pedido);
	}
	printf("\nO valor total do pedido é de R$ %.2f", total);
	return(0);
}
