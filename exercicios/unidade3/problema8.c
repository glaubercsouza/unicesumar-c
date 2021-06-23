#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		idade, opiniao, contador;
	float	somaIdade, satisf, insatisf;
	satisf = 0;
	insatisf = 0;
	printf("Digite a idade: ");
	scanf("%d", &idade);
	while(idade != 0){
		printf("Digite a sua opinião sobre o produto:\n1 - Satisfatório\n2 - Indiferente\n3 - Insatisfatório\n");
		scanf("%d", &opiniao);
		if (opiniao == 1){
			satisf++;
			somaIdade += idade;
		}
		if (opiniao == 3){
			insatisf++;
		}
		printf("Digite a idade: ");
		scanf("%d", &idade);
	}
	printf("O número de clientes que responderam satisfatório foi %.0f\n", satisf);
	printf("A média de idade dos clientes que responderam satisfatório é %.2f\n", somaIdade / satisf);
	printf("O número de clientes que responderam instisfatório foi %.0f", insatisf);
	return(0);
}
