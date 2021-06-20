#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		num, par, impar;
	par = 0;
	impar = 0;
	do{
		printf("Informe um número ou digite 0 para sair: ");
		scanf("%d", &num);
		if (num % 2 == 0){
			par++;
		}
		else {
			impar++;
		}
	}
	while (num != 0);
	printf("\nA quantidade de números pares é de %d", par);
	printf("\nA quantidade de números ímpares é de %d", impar);
	return(0);
}
