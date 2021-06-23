#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float		salario, totFilhos, maior, totSalarios, mediaSal, mediaFilhos;
	int			filhos, pessoas;
	printf("Informe o salário: ");
	scanf("%f", &salario);
	while(salario != -1){
		if(salario > maior){
			maior = salario;
		}
		pessoas++;
		totSalarios += salario;
		printf("Informe a quantidade de filhos: ");
		scanf("%d", &filhos);
		totFilhos += filhos;
		printf("Informe o salário: ");
		scanf("%f", &salario);
	}
	mediaSal = totSalarios / pessoas;
	mediaFilhos = totFilhos / pessoas;
	printf("O maior salário é R$ %.2f\n", maior);
	printf("A média de salários é R$ %.2f\n", mediaSal);
	printf("A média de filhos é R$ %.2f", mediaFilhos);
	return(0);
}
