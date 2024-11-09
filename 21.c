#include <stdio.h>

int num = 0;

int main () {
    do {
    printf("Digite um número de 5 digitos para checar se é um palíndromo.\n");
    scanf("%d",&num);
        if (num / 1000 < 1){
            printf("Número inválido. Digite um número de 5 digitos.");
        }
    } while ( num / 1000 < 1);

        if(num / 10000 == num % 10 && num / 1000 % 2 == num % 100 / 10){
        printf("O número é um palíndromo.");
   } else {
        printf("Não é um palíndromo.");
   }
        
}