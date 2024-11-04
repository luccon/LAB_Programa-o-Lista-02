#include <stdio.h>

int numero = 0, fatorial = 1;

int main(){
    printf("Digite o número que deseja calcular o seu fatorial:");
    scanf("%d",&numero);

    for (int fat = 1; fat <= numero; fat++){
        fatorial = fatorial * fat;
    }
    printf("O fatorial de %d é igual a %d",numero, fatorial);
}