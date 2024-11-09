#include <stdio.h>

float valor_total = 0, entrada = 0;
int prestacao = 0;

int main (){
    printf("Digite o valor do produto: R$\n");
    scanf("%f",&valor_total);

    prestacao = (int)valor_total/3;
    entrada = valor_total - (2 * prestacao);

    printf("Entrada: R$ %.2f\n",entrada);
    printf("As duas prestações são de: R$%d.0\n",prestacao);
}