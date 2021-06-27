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
	struct 	produto ficha[10];
	int		i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o c�digo do produto: ");
		scanf("%d", &ficha[i].codigo);
		printf("Digite a descri��o do produto: ");
		scanf("%s", ficha[i].descricao);
		printf("Digite o pre�o do produto: ");
		scanf("%f", &ficha[i].preco);
		printf("Digite o saldo do produto: ");
		scanf("%d", &ficha[i].saldo);
	}
	
	for(i = 0; i < 10; i++){
		printf("\nPRODUTO %d\n", i + 1);
		printf("C�digo: %d\n", ficha[i].codigo);
		printf("Descri��o: %s\n", ficha[i].descricao);
		printf("Pre�o: R$ %.2f\n", ficha[i].preco);
		printf("Saldo: %d\n", ficha[i].saldo);
	}
	return(0);
}
