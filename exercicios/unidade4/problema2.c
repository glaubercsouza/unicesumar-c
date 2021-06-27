#include <stdio.h>

int main(){
	int		vetorA[30];
	int		i;
	
	for(i = 0; i < 30; i++){
		printf("Digite o %d elemento: ", i);
		scanf("%d", &vetorA[i]);
	}
	for(i = 29; i >= 0; i--){
		printf("\n %d", vetorA[i]);
	}
	return(0);
}
