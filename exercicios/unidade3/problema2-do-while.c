#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float	nota, media, somaNotas;
	int		numNotas, aprovados, reprovados, codigo, i;
	printf("Informe o n�mero de notas da disciplina: \n");
	scanf("%d", numNotas);
	do{
		printf("Informe o c�digo do aluno ou 0 para sair: \n");
		scanf("%d", codigo);
		somaNotas = 0;
		for(i = 1; i <= numNotas; i++){
			printf("Informe a Nota %d", i);
			scanf("%f", nota);
			somaNotas = somaNotas + nota;
		}
		media = somaNotas / numNotas;
		if (media >= 6){
			aprovados++;
		} else{
			reprovados++;
		}
	}while(codigo != 0);
	printf("\nO n�mero de aprovados � %d", aprovados);
	printf("\nO n�mero de reprovados � %d", reprovados);
	return(0);	
}
