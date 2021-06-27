#include <stdio.h>
#include <locale.h>

struct produto {
	int		codigo;
	char	descricao[50];
	float	preco;
	int 	saldo;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	struct produto ficha;
	
	printf("Digite o código do produto: ");
	scanf("%d", &ficha.codigo);
	printf("Digite a descrição do produto: ");
	scanf("%s", ficha.descricao);
	printf("Digite o preço do produto: ");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	
	printf("Código: %d\n", ficha.codigo);
	printf("Descrição: %s\n", ficha.descricao);
	printf("Preço: R$ %.2f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return(0);
}
