#include <stdio.h>
#include <locale.h>
#define TAM 5
struct	funcionario{
	int		matricula;
	char	nome[50];
	char	setor[30];
	float	salario;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct	funcionario ficha[TAM];
	int		busca, i, acha;
	char	op;
	
	for (i = 0; i < TAM; i++){
		printf("Digite a matr�cula do funcion�rio: ");
		scanf("%d", &ficha[i].matricula);
		fflush(stdin);
		printf("Digite o nome: ");
		scanf("%50[^\n]s", &ficha[i].nome);
		fflush(stdin);
		printf("Digite o setor: ");
		scanf("%.30[^\n]s", &ficha[i].setor);
		fflush(stdin);
		printf("Digite o sal�rio: ");
		scanf("%f", &ficha[i].salario);
		fflush(stdin);
	}
	do{
		printf("Deseja realizar busca (S/N): ");
		scanf("%c", &op);
		fflush(stdin);
	}while((op != 'S') && (op != 's') && (op != 'n') && (op != 'N'));
	while((op == 'S') || (op == 's')){
		printf("Informe a matr�cula que deseja buscar: ");
		scanf("%d", &busca);
		fflush(stdin);
		i = 0;
		acha = 0;
		while((i < TAM) && (acha == 0)){
			if(ficha[i].matricula == busca){
				acha = 1;
			}else{
				i++;
			}
		}
		if(acha == 1){
			printf("O setor � %s\n", ficha[i].setor);
			printf("O sal�rio �: %.2f\n", ficha[i].salario);
		}else{
			printf("Matr�cula n�o cadastrada\n");
		}
		do{
			printf("Deseja realizar busca (S/N): ");
			scanf("%c", &op);
			fflush(stdin);
		}while((op != 'S') && (op != 's') && (op != 'n') && (op != 'N'));
	}
	return(0);
}
