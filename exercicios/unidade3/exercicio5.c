#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int 	i;
	for(i = 0; i <= 30; i++){
		if(i % 3 == 0){
			printf("O número %d é divisível por 3.\n", i);
		}
		if(i % 7 == 0){
			printf("O número %d é divisível por 7.\n", i);
		}
	}
	return(0);
}
