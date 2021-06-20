#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float	nota, media, somaNotas;
	int		numNotas, aprovados, reprovados, codigo, i;
	printf("Informe o n�mero de notas da disciplina: ");
	scanf("%d", &numNotas);
	printf("\nInforme o c�digo do aluno ou 0 para sair: ");
	scanf("%d", &codigo);
	aprovados = 0;
	reprovados = 0;
	while (codigo != 0){
		somaNotas = 0;
		for(i = 1; i <= numNotas; i++){
			printf("Informe a Nota %d: ", i);
			scanf("%f", &nota);
			somaNotas = somaNotas + nota;
		}
		media = somaNotas / numNotas;
		if (media >= 6){
			aprovados++;
		} else{
			reprovados++;
		}
		printf("\nInforme o c�digo do aluno ou 0 para sair: ");
		scanf("%d", &codigo);
	}
	printf("\nO n�mero de aprovados � %d", aprovados);
	printf("\nO n�mero de reprovados � %d", reprovados);
	return(0);	
}
