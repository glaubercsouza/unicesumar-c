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
	
	printf("Digite o c�digo do produto: ");
	scanf("%d", &ficha.codigo);
	printf("Digite a descri��o do produto: ");
	scanf("%s", ficha.descricao);
	printf("Digite o pre�o do produto: ");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	
	printf("C�digo: %d\n", ficha.codigo);
	printf("Descri��o: %s\n", ficha.descricao);
	printf("Pre�o: R$ %.2f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return(0);
}
