#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int 	vetorA[10];
	int		i, acha, busca;
	
	for(i = 0; i < 10; i++){
		printf("Digite o %d elemento: ", i);
		scanf("%d", &vetorA[i]);
	}
	printf("Informe o elemento que deseja buscar: ");
	scanf("%d", &busca);
	i = 0;
	acha = 0;
	while((acha == 0) && (i < 10)){
		if (vetorA[i] == busca){
			acha = 1;
		}else{
			i++;
		}
	}
	if(acha == 1){
		printf("O elemento %d foi encontrado na posi��o %d.", busca, i);
	}else{
		printf("O elemento n�o foi encontrado.");
	}
	return(0);
}
