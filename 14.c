#include <stdio.h>

int FAIXA_A = 0, FAIXA_B = 0, QNT_DIVISIVEIS = 0;

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
        if (i % 3 == 0){
            QNT_DIVISIVEIS ++;
        }
    }
    printf("A quantidade de números divisiveis por 3 na faixa %d e %d é %d.\n",FAIXA_A,FAIXA_B,QNT_DIVISIVEIS);
}