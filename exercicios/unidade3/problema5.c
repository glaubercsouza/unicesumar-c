#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int		num, divisao, i;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	for(i = num; i != 0; i--){
		if (num % i == 0){
			divisao++;
		}
	}
	if(divisao == 2){
		printf("O número é primo.");
	}else{
		printf("O número não é primo.");
	}
	return(0);
}
