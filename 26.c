#include <stdio.h>


int DecimalBinario (int num) {
    for (int i = 8; i >= 0; i--){
        int bit = (num >> i) & 1;
        printf("%d",bit);
    }
}

int main () {
    for ( int i = 1; i <=256; i++){
        printf("O número %d em binário:",i);
        DecimalBinario(i);
        printf(". Em octal: %o. Em hexadimal:%x\n",i,i);
    }
}