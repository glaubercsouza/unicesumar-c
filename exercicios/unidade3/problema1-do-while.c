#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		num, par, impar;
	par = 0;
	impar = 0;
	do{
		printf("Informe um n�mero ou digite 0 para sair: ");
		scanf("%d", &num);
		if (num % 2 == 0){
			par++;
		}
		else {
			impar++;
		}
	}
	while (num != 0);
	printf("\nA quantidade de n�meros pares � de %d", par);
	printf("\nA quantidade de n�meros �mpares � de %d", impar);
	return(0);
}
