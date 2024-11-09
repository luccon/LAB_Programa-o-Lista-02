#include <stdio.h>

int main () {
    int  n = 20;
    int fibonacci[n];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    printf("Série de Fibonacci até o vigésimo termo:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", fibonacci[i]);
    }
}