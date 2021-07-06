#include <stdio.h>

int main(){
	int		x[10], i;
	for(i = 0; i < 10; i++){
		x[i] = ++i;
		printf("\n[%d] = %d ", i, x[i]);
	}
	return(0);
}
