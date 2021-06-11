#include <stdio.h>

int main() {
	float 	dep, taxa, rend, total;
	
	printf("Qual o valor do deposito?");
	scanf("%f", &dep);
	printf("\nQual a taxa de juros?");
	scanf("%f", &taxa);
	
	rend = dep * (taxa/100);
	total = rend + dep;
	
	printf("\nO valor do rendimento e: %.2f", rend);
	printf("\nO valor total e: %.2f", total);
	return(0);
}
