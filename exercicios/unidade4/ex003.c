#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char	pal[30];
	int		i, tam;
	char	letra;
	printf("Digite uma palavra: ");
	scanf("%s", pal);
	strlwr(pal);
	tam = strlen(pal);
	if (tam % 2 != 0){
		for(i = 0; i < 30; i++){
			letra = pal[i];
			switch(letra){
				case 'a':
					printf("%c\n", letra);
					break;
				case 'e':
					printf("%c\n", letra);
					break;
				case 'i':
					printf("%c\n", letra);
					break;
				case 'o':
					printf("%c\n", letra);
					break;
				case 'u':
					printf("%c\n", letra);
					break;
			}
		}
	}
	return(0);
}
