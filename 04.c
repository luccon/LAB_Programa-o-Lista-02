#include <stdio.h>

int altura_jose = 150, altura_pedro = 110;
char anos = 0;

int main(){
    for(int i = 0; altura_jose >= altura_pedro; i++){
        altura_jose += 2;
        altura_pedro += 3;
        anos = i;
    }
    printf("Em %d anos Pedro terá %dcm de altura e José terá %dcm de Altura. Sendo assim, Pedro será maior que José em %d anos.",anos, altura_pedro, altura_jose, anos);
}