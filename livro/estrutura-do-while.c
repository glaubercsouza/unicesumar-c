#include <stdio.h>

int main(){
	char	nome[30];
	int		i;
	printf("Informe o nome: \n");
	scanf("%s", nome);
	i = 1;
	do{
		printf("\n %d - %s", i, nome);
		i++;
	}
	while(i <= 10);
	return(0);
}
