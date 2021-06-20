#include <stdio.h>

int main(){
	char	nome[30];
	int		i;
	printf("Informe o nome: \n");
	scanf("%s", nome);
	i = 1;
	while (i <= 10){
		printf("\n%d - %s", i, nome);
		i++;
	}
	return(0);
}
