#include <stdio.h>

int valor_maximo = 0, valor_minimo = 0, valor_fornecido = 1;

int main(){
    while(valor_fornecido != 0){
        printf("Entre com um valor:(Atenção! O valor 0(zero) dita a finalização do programa)\n");
        scanf("%d",&valor_fornecido);

        if (valor_fornecido > valor_maximo){
            valor_maximo = valor_fornecido;
        } else if(valor_fornecido < valor_minimo){
            valor_minimo = valor_fornecido;
        } else {
            printf("O maior valor fornecido foi %d e o menor foi %d.\n",valor_maximo,valor_minimo);
        }
    }
}