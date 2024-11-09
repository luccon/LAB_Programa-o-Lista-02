#include <stdio.h>

int somatorio_3 = 0; somatorio_5 = 0;

int main () {
    for ( int i = 0; i <= 200; i++){
        if (i <= 100 && i % 3 == 0){
            somatorio_3 += i;
        } else if ( i >= 100 && i % 5 == 0){
            somatorio_5 += i;
        }
    }
    printf("O somátorio dos valores divisiveís por 3 entre 0 e 100 é = %d.\nO somátorio dos valores divisiveís por 5 entre 100 e 200 é = %d.\n",somatorio_3,somatorio_5);
}