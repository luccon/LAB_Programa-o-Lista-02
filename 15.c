#include <stdio.h>
#include <math.h>

int main () {
    for ( int i = 0; i < 8; i++){
        printf("3^%d = %d.\n",i,(int)pow(3,i));
    }
}