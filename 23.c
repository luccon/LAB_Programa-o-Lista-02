#include <stdio.h>

int main ( ) {
    int a = 1, b = 1;

    printf("Exemplo de Pré-incremento ++A e Pós-incremento B++.\n");
    printf("Quando Pré-incrementamos o valor muda instântaneamente: a = %d. (++a)\n",++a);
    printf("Quando Pós-incrementamos o valor muda para a proxima vez que for chamado: b = %d. (b++)\n",b++);
    printf("Assim quando chamamos B novamente o valor muda para: b = %d.\n",b);
}