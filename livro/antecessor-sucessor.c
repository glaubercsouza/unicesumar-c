#include <stdio.h>

int main(){
	
int		num;

printf("Digite um numero: ");
scanf("%d", &num);
printf("\n O numero digitado foi %d", num);
printf("\n Seu antecessor e %d", num-1);
printf("\n Seu sucessor e %d", num+1);

return(0);
}
