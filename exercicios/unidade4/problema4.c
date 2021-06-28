#include <stdio.h>
#include <string.h>
int main(){
	char	nome[30];
	int		tam, i;
	printf("Digite o nome: ");
	gets(nome);
	tam = strlen(nome);
	for(i = 0; i < tam; i++){
		if(i % 2 == 0){
			printf("\n %c", nome[i]);
		}
	}
	return(0);
}
