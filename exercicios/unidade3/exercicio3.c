#include <stdio.h>
#include <locale.h>

int main(){
	int num1, num2, res;
	for(num1 = 1; num1 <= 10; num1++){
		printf("\nTabuada do %d\n", num1);
		for(num2 = 1; num2 <= 10; num2++){
			res = num1 * num2;
			printf("%d X %d = %d\n", num1, num2, res);
		}
	}
}
