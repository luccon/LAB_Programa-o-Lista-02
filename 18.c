#include <stdio.h>
#include <stdint.h>

uint64_t aux = 1, somatorio = 0;

int main () {
    for(int i = 1; i <= 64; i++){
        somatorio += aux;
        aux *= 2;
    }
    printf("A quantidade de grãos de trigo é: %llu",somatorio);
}