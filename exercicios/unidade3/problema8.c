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
		printf("Digite a sua opini�o sobre o produto:\n1 - Satisfat�rio\n2 - Indiferente\n3 - Insatisfat�rio\n");
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
	printf("O n�mero de clientes que responderam satisfat�rio foi %.0f\n", satisf);
	printf("A m�dia de idade dos clientes que responderam satisfat�rio � %.2f\n", somaIdade / satisf);
	printf("O n�mero de clientes que responderam instisfat�rio foi %.0f", insatisf);
	return(0);
}
