#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float	salarioAtual, novoSalario;
	printf("***************************************************\n* EMPRESA ATIVIDADE-01 :)\n* Nome: Glauber Costa de Souza\n* RA: 20143994-5\n*\n***************************************************\n* Qual foi o seu �ltimo sal�rio l�quido recebido?\n* R$ ");
	scanf("%f", &salarioAtual);
	novoSalario = salarioAtual * 1.075;
	if(salarioAtual <= 1750){
		novoSalario += 150;
	}
	printf("*\n***************************************************\n* O �ltimo sal�rio recebido foi de R$ %.2f.\n* O seu pr�ximo prov�vel sal�rio ser� de R$ %.2f.\n*\n***************************************************", salarioAtual, novoSalario);
	return(0);	
}
