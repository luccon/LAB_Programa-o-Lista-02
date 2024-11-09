#include <stdio.h>

int num1 = 0, num2 = 0;
float divisao = 0;

int main (){
    printf("Digite o primeiro número:\n");
    scanf("%d",&num1);

    do {
        printf("Digite o segundo número\n");
        scanf("%d",&num2);

        if(num2 == 0){
            printf("O segundo número não pode ser nulo (zero).\n");
        }
    } while(num2 == 0);

    divisao = (float)num1 / num2;

    printf("A divisão entre %d e %d é igual a %.2f.",num1,num2,divisao);
}