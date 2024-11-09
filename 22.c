#include <stdio.h>


int main () {

int num = 0, contador = 0;

printf("Digite um número inteiro:\n");
scanf("%d",&num);

while (num > 0){
    if (num % 10 == 7){
        contador++;
    }
    num /= 10;
}
printf("Quantidade de algorismos 7 no número: %d\n",contador);

}