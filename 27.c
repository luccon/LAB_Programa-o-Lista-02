#include <stdio.h>
#include <stdlib.h>

int main () {

int num = 0, aux = 0, maior = 0, menor = 0;

while (1){
    printf("Digite um número:\n");
    scanf("%d",&num);

    if(aux == 0){
        maior = num;
        menor = num;
    } else if (num > maior) {
        maior = num;
    } else if (num < menor){
        menor = num;
    }
    
    if(num < 0  && abs(num) % 2 == 0){
        break;
    }
    aux++;
}
    printf("O maior número é %d e o menor número é %d.\n",maior,menor);
}