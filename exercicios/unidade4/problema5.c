#include <stdio.h>
#include <string.h>

int main(){
	char	palavra[30];
	int		tam, i;
	printf("Digite a palavra: ");
	gets(palavra);
	tam = strlen(palavra);
	for(i = tam - 1; i >= 0; i--){
		printf("%c", palavra[i]);
	}
	return(0);
}
