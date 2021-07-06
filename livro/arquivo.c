#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	FILE 	*arq;
	char	letra;
	
	arq = fopen("arquivo.txt", "w");
	if (arq == NULL){
		printf("O arquivo não foi aberto. Ocorreuu um erro!\n");
	}
	else{
		printf("Digite um caractere: ");
		scanf("%c", &letra);
		fflush(stdin);
		while((letra != 'f') && (letra != 'F')){
			fputc(letra, arq);
			if(ferror(arq)){
				printf("Erro de gravação!!!\n");
			}
			else{
				printf("Gravação efetuada com sucesso!\n");
			}
			printf("Digite outro caractere: ");
			scanf("%c", &letra);
			fflush(stdin);
		}
	}
	fclose(arq);
}
