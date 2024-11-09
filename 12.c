#include <stdio.h>

int num = 0;

int main () {
    printf("Qual número deseja saber a tabuada?\n");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d.\n",num,i,i*num);
    }
}