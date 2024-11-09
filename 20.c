#include <stdio.h>

int main () {
    for (int i = 1; i <=10; i++){
        if (i % 2 == 1){
            int fat = 1;
            for (int n = i; n > 1;n--){
                fat = fat * n;
            }
                printf("O fatorial de %d é : %d\n",i,fat);
        }
    }
}