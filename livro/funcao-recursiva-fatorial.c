#include <stdio.h>
#include <locale.h>

int fatorial (int x){
	if (x == 0){
		return 1;
	}else {
		return x * fatorial (x - 1);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int	num, resposta;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	resposta = fatorial(num);
	printf("O fatorial é %d\n", resposta);
}
