#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int		i;
	for (i = 100; i != 0; i--){
		if (i % 3 == 0){
			printf("%d\t", i);
		}
	}
	return(0);	
}
