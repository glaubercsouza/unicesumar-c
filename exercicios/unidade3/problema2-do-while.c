#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		numNotas, codigo, i, aprovados, reprovados;
	float	nota, somaNotas, media;
	aprovados = 0;
	reprovados = 0;
	printf("Informe o número de notas da disciplina: \n");
	scanf("%d", &numNotas);
	printf("\nInforme o código do aluno ou 0 para sair: ");
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
			printf("\nInforme o código do aluno ou 0 para sair: ");
			scanf("%d", &codigo);
		} while (codigo != 0);
		printf("\nO número de aprovados é %d", aprovados);
		printf("\nO número de reprovados é %d", reprovados);
	} else{
		printf("Não foi registrado nenhum aluno.");
	}
	return(0);
}
