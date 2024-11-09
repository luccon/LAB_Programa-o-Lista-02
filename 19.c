#include <stdio.h>

int FAIXA_A = 0, FAIXA_B = 0, SOMA = 0, QNT_NUMEROS = 0;
float MEDIA = 0; 

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
    for ( int i = FAIXA_A; i <= FAIXA_B; i++){
        QNT_NUMEROS += 1;
        SOMA += i;        
    }
        MEDIA = (float)SOMA / QNT_NUMEROS;
        printf("A média aritmética dos números é: %.2f",MEDIA);
}