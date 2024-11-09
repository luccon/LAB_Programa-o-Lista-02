#include <stdio.h>

int FAIXA_A = 0, FAIXA_B = 0, SOMATORIO = 0;

int main () {
    printf("Entre com o primeiro valor:\n");
    scanf("%d",&FAIXA_A);
    printf("Entre com o segundo valor:\n");
    scanf("%d",&FAIXA_B);

        if (FAIXA_A > FAIXA_B){
            FAIXA_A = FAIXA_A ^ FAIXA_B;
            FAIXA_B = FAIXA_A ^ FAIXA_B;
            FAIXA_A = FAIXA_A ^ FAIXA_B;
        }
    for (int i = FAIXA_A; i <= FAIXA_B; i++){
        if (i % 2 == 0){
            SOMATORIO += i;
        }
    }
    printf("O somátorio dos números pares na faixa %d e %d é %d.\n",FAIXA_A, FAIXA_B,SOMATORIO);
}