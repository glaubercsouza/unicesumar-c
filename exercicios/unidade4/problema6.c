#include <stdio.h>
#include <string.h>

int main(){
	char	palavra[30];
	int		tam, i;
	printf("Digite o nome: ");
	gets(palavra);
	tam = strlen(palavra);
	for(i = 0; i < tam; i++){
		printf("%s\n", palavra);
	}
	return(0);
}
