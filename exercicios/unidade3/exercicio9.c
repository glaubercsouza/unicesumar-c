#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	comodo[30];
	float	larg, compr, area, total;
	printf("Digite o nome do cômodo ou FIM para sair: ");
	scanf("%s", comodo);
	while(strcmp(comodo,"fim") != 0 && strcmp(comodo,"FIM") != 0 && strcmp(comodo,"Fim") != 0) {
		printf("Digite a largura do cômodo %s: ", comodo);
		scanf("%f", &larg);
		printf("Digite o comprimento do cômodo %s: ", comodo);
		scanf("%f", &compr);
		area = larg * compr;
		total += area;
		printf("\nigite o nome do cômodo ou FIM para sair: ");
		scanf("%s", comodo);	
	}
	printf("A área total da residência é %.2f", total);
	return(0);
}
