#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		i, soma;
	for(i = 200; i <= 500; i++){
		if(i % 2 != 0){
			soma += i;
		}
	}
	printf("\nA soma de todos os número ímpares entre 200 e 500 é %d", soma);
}
