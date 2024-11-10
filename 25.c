//essa questão eu num sei nem pra onde que vai.

#include <stdio.h>

int main () {
    float pi = 0.0;
    int i = 0;

     while (pi < 3.14) {
        
        double b = 4.0 * ((i % 2 == 0) ? 1 : -1) / (2 * i + 1);
        pi += b;
        printf("pi = %.2f",pi);
        i++;
     }
}