#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int		num, divisao, i;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	for(i = num; i != 0; i--){
		if (num % i == 0){
			divisao++;
		}
	}
	if(divisao == 2){
		printf("O n�mero � primo.");
	}else{
		printf("O n�mero n�o � primo.");
	}
	return(0);
}
