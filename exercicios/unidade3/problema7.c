#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		idade, contador;
	float	altura, somaIdade, somaAltura;
	contador = 0;
	printf("Digite a idade ou 0 para sair: ");
	scanf("%d", &idade);
	while(idade != 0){
		somaIdade += idade;
		contador++;
		printf("Escreva a altura: ");
		scanf("%f", &altura);
		somaAltura += altura;
		printf("Digite a idade ou 0 para sair: ");
		scanf("%d", &idade);
	}
	printf("A m�dia de idade das pessoas � %.2f\n", somaIdade / contador);
	printf("A m�dia de altura das pessoas � %.2f", somaAltura / contador);
	return(0);
}
