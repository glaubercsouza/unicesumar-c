#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float 	salario, aumento;
	int		codigo;
	
	printf("Qual � o sal�rio atual do funcion�rio?\nR$ ");
	scanf("%f", &salario);
	printf("Qual � o c�digo do cargo do funcion�rio?\n1 - Servente\n2 - Pedreiro\n3 - Mestre de Obras\n4 - T�cnico de Seguran�a\n");
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
			printf("O c�digo digitado n�o � v�lido!");
			break;			
	}
	salario = salario + aumento;
	printf("O valor do aumento � R$ %.2f\n", aumento);
	printf("O valor do novo sal�rio � R$ %.2f", salario);
	return(0);
}
