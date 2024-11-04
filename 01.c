#include <stdio.h>

char dia_semana = 0, aux = 1;

int main(){

    while(aux == 1){
        printf("Escolha o dia da semana:\n1.Domingo\n2.Segunda-feira\n3.Terça-feira\n4.Quarta-feira\n5.Quinta-feira\n6.Sexta-feira\n7.Sábado\n0.Sair\n");
        scanf(" %c",&dia_semana);

        switch (dia_semana){
        case '1':
            printf("Você escolheu domingo.\n");
            break;
        case '2':
            printf("Você escolheu segunda-feira.\n");
            break;
        case '3':
            printf("Você escolheu terça-feira.\n");
            break;
        case '4':
            printf("Você escolheu quarta-feira.\n");
            break;
        case '5':
            printf("Você escolheu quinta-feira.\n");
            break;
        case '6':
            printf("Você escolheu sexta-feira.\n");
            break;
        case '7':
            printf("Você escolheu sábado.\n");
            break;
        case '0':
            printf("Até mais!\n");
            aux = 0;
            break;
        default :
            printf("Número inválido.\n");
            break;    
        }
    }
}