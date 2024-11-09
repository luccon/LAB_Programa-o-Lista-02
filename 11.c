#include <stdio.h>

int TAM_A = 0, TAM_B = 0;

void quadrados (TAM_A, TAM_B){
    printf("Verificando os quadrados dos multiplos de 4 na faixa %d a %d.\n",TAM_A,TAM_B);
    for (int i = TAM_A; i <= TAM_B; i++){
        if (i % 4 == 0){
            printf("O número %d é multiplo de 4 e seu quadrado é: %d.\n",i,i*i);
        }
    }
}

int main () {
    printf("Entre com o primeiro valor:\n");
    scanf("%d",&TAM_A);
    printf("Entre com o segundo valor:\n");
    scanf("%d",&TAM_B);

        if (TAM_A > TAM_B){
            TAM_A = TAM_A ^ TAM_B;
            TAM_B = TAM_A ^ TAM_B;
            TAM_A = TAM_A ^ TAM_B;
        }
    quadrados(TAM_A,TAM_B);
}