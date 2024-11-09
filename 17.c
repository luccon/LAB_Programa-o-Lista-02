#include <stdio.h>

int celcius = 10, Fahrenheit = 0;

int main () {
    for(int i = celcius; i <= 100; i += 10){
        Fahrenheit = (i * 9 / 5) + 32;
        printf("%d Cº = %d F.\n",celcius,Fahrenheit);
    }
}