#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float	nota, media, somaNotas;
	int		numNotas, aprovados, reprovados, codigo, i;
	printf("Informe o número de notas da disciplina: \n");
	scanf("%d", numNotas);
	do{
		printf("Informe o código do aluno ou 0 para sair: \n");
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
	printf("\nO número de aprovados é %d", aprovados);
	printf("\nO número de reprovados é %d", reprovados);
	return(0);	
}
