#include <stdio.h>
#include <math.h>

int main(){
	float	n1, n2, total;
	
	printf("Escreva o primeiro numero: ");
	scanf("%f", &n1);
	printf("Escreva o segundo numero: ");
	scanf("%f", &n2);
	total = pow(n1, n2);
	
	printf("%.2f elevado a %.2f e: %.2f", n1, n2, total);
	return(0);
}
