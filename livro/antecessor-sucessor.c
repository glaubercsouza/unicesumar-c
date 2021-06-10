#include <stdio.h>

int main(){
	
int num, ant, suc;

printf("Digite um numero: ");
scanf("%d", &num);
ant = num - 1;
suc = num + 1;

printf("\n O numero digitado foi %d", num);
printf("\n Seu antecessor e %d", ant);
printf("\n Seu sucessor e %d", suc);

return(0);
}
