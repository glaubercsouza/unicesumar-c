#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float 	salario, aumento;
	int		codigo;
	
	printf("Qual é o salário atual do funcionário?\nR$ ");
	scanf("%f", &salario);
	printf("Qual é o código do cargo do funcionário?\n1 - Servente\n2 - Pedreiro\n3 - Mestre de Obras\n4 - Técnico de Segurança\n");
	scanf("%d", &codigo);
	switch(codigo)
	{
		case 1:
			aumento = salario * 0.4;
			break;
		case 2:
			aumento = salario * 0.35;
			break;
		case 3:
			aumento = salario * 0.20;
			break;
		case 4:
			aumento = salario * 0.10;
			break;
		default:
			printf("O código digitado não é válido!");
			break;			
	}
	salario = salario + aumento;
	printf("O valor do aumento é R$ %.2f\n", aumento);
	printf("O valor do novo salário é R$ %.2f", salario);
	return(0);
}
