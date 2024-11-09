#include <stdio.h>

int cateto1 = 0, cateto2 = 0, hipotenusa = 0;

int main () {
    for (cateto1 = 1; cateto1 <= 500; cateto1++){
        for(cateto2 = cateto1; cateto2 <= 500; cateto2++){
            for(hipotenusa = cateto2; hipotenusa <=500; hipotenusa++){
                if(cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa){
                    printf("Tripla de Pitágoras: Cateto 1 = %d, cateto 2 = %d e Hipotenusa = %d\n",cateto1,cateto2,hipotenusa);
                }
            }
        }
    }
}