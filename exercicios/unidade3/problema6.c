#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float		salario, totFilhos, maior, totSalarios, mediaSal, mediaFilhos;
	int			filhos, pessoas;
	printf("Informe o sal�rio: ");
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
		printf("Informe o sal�rio: ");
		scanf("%f", &salario);
	}
	mediaSal = totSalarios / pessoas;
	mediaFilhos = totFilhos / pessoas;
	printf("O maior sal�rio � R$ %.2f\n", maior);
	printf("A m�dia de sal�rios � R$ %.2f\n", mediaSal);
	printf("A m�dia de filhos � R$ %.2f", mediaFilhos);
	return(0);
}
