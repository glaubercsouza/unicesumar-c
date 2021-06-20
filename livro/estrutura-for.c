#include <stdio.h>

int main(){
	char 	nome[30];
	int		i;
	
	printf("Informe o nome:\n");
	scanf("%s", nome);
	for (i=1; i<=10; i++){
		printf("\n%s", nome);
	}
	return(0);
}
