#include <stdio.h>

int quadrado = 0;

int main (){
    for (int i = 15; i <= 90; i++){
        if (i % 4 == 0){
            printf("O número %d é multiplo de 4 e seu quadrado é: %d.\n",i,i*i);
        }
    }
}