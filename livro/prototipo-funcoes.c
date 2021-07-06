#include <stdio.h>
#include <locale.h>

int calcQuadrado(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int	num, resposta;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	resposta = calcQuadrado(num);
	printf("O quadrado do número %d é %d\n", num, resposta);
	
	int calcQuadrado(int x){
		x = x * x;
		return x;
	}
}
