#include <stdio.h>
main() {
    int n, x;
    printf("\n Digite um n�mero: ");
    scanf("%d", &n);
               
    x = n++;
    printf("N = %d", n);
    printf("\nX = %d", x);
}
