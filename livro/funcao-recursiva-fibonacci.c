#include <stdio.h>
#include <locale.h>

int	fibonacci (int x){
	if ((x == 0) || (x == 1)){
		return x;
	}else {
		return fibonacci(x - 2) + fibonacci (x - 1);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, resposta;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	resposta = fibonacci(num);
	printf("O fibonacci é %d\n", resposta);
}
