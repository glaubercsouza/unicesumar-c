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
		printf("Escolha um estado civil:\n1 - Casado(a)\n2 - Solteiro(a)\n3 - Separado(a)\n4 - Vi�vo(a)\n");
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
				printf("Op��o Inv�lida!");
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
	printf("O total de pessoas casadas � de %d\n", totCas);
	printf("O total de pessoas solteiras � de %d\n", totSolt);
	printf("O total de pessoas separadas � de %d\n", totSep);
	printf("O total de pessoas vi�vas � de %d\n", totViu);
	printf("A m�dia de idade das pessoas cadastradas � de %.2f\n", medIda);
	printf("A m�dia de peso das pessoas cadastradas � de %.2f\n", medPes);
	return(0);
}
