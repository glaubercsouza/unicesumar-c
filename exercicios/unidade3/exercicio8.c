#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		totCas, totSolt, totSep, totViu, estCivil, contador;
	float	idade, peso, totIdade, totPeso, medIda, medPes;
	char	sexo;
	printf("Digite a idade ou 0 para sair: ");
	scanf("%f", &idade);
	totSolt = 0;
	while(idade != 0){
		printf("Digite o peso: ");
		scanf("%f", &peso);
		printf("Digite o sexo: ");
		scanf("%s", &sexo);
		printf("Escolha um estado civil:\n1 - Casado(a)\n2 - Solteiro(a)\n3 - Separado(a)\n4 - Viúvo(a)\n");
		scanf("%d", &estCivil);
		switch(estCivil){
			case 1:
				totCas++;
				break;
			case 2:
				totSolt++;
				break;
			case 3:
				totSep++;
				break;
			case 4:
				totViu++;
				break;
			default:
				printf("Opção Inválida!");
				break;
		}
		totIdade += idade;
		totPeso += peso;
		contador++;
		printf("\nDigite a idade ou 0 para sair: ");
		scanf("%f", &idade);
	}
	medIda = totIdade / contador;
	medPes = totPeso / contador;
	printf("O total de pessoas casadas é de %d\n", totCas);
	printf("O total de pessoas solteiras é de %d\n", totSolt);
	printf("O total de pessoas separadas é de %d\n", totSep);
	printf("O total de pessoas viúvas é de %d\n", totViu);
	printf("A média de idade das pessoas cadastradas é de %.2f\n", medIda);
	printf("A média de peso das pessoas cadastradas é de %.2f\n", medPes);
	return(0);
}
