#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		num, par, impar;
	printf("Informe um número ou digite 0 para sair: ");
	scanf("%d", &num);
	par = 0;
	impar = 0;
	while (num != 0){
		if (num % 2 == 0){
			par++;
		}
		else {
			impar++;
		}
		printf("Informe um número ou digite 0 para sair: ");
		scanf("%d", &num);
	}
	printf("\nA quantidade de números pares é de %d", par);
	printf("\nA quantidade de números ímpares é de %d", impar);
	return(0);
}
