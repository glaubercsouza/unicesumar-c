#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		numNotas, codigo, i, aprovados, reprovados;
	float	nota, somaNotas, media;
	aprovados = 0;
	reprovados = 0;
	printf("Informe o n�mero de notas da disciplina: \n");
	scanf("%d", &numNotas);
	printf("\nInforme o c�digo do aluno ou 0 para sair: ");
	scanf("%d", &codigo);
	if (codigo != 0){
		do{
			somaNotas = 0;
			for (i = 1; i <= numNotas; i++){
			printf("Informe a nota %d: ", i);
			scanf("%f", &nota);
			somaNotas = somaNotas + nota;
			}
			media = somaNotas / numNotas;
			if (media >= 6){
				aprovados++;
			}else{
				reprovados++;
			}
			printf("\nInforme o c�digo do aluno ou 0 para sair: ");
			scanf("%d", &codigo);
		} while (codigo != 0);
		printf("\nO n�mero de aprovados � %d", aprovados);
		printf("\nO n�mero de reprovados � %d", reprovados);
	} else{
		printf("N�o foi registrado nenhum aluno.");
	}
	return(0);
}
