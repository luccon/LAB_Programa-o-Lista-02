#include <stdio.h> 
#include <stdlib.h>
#define TAM 3
unsigned char x[TAM], y[TAM], distancia[TAM];
char menor_dis;

void coletor(unsigned char var[TAM]){
    int aux = 0;
    for(int i = 0; i < TAM; i++){
        printf("%dº número:\n",i+1);
        scanf("%d",&aux);
        var[i] = aux;
    }
}
void distancias(unsigned char var1[TAM], unsigned char var2[TAM], unsigned char distancia[TAM]){
    int aux = 0;
    for(int i = 0; i < TAM; i++){
        aux = abs(x[i] - y[i]);
        distancia[i] = aux;
    }
    for(int j = 0; j < TAM; j++){
        printf("Distancia entre os pontos X[%d] e Y[%d] é:%d\n",j,j,distancia[j]);
    }
}
void menor_distancia(unsigned char distancia[TAM], char menor_dis){
    int aux = distancia[0], aux_2 = 0;
    for(int i = 0; i < TAM; i++){
        if(aux < distancia[i]){
        } else if (aux > distancia[i]){
            aux = distancia[i];
            aux_2 = i;
        }
    }
    menor_dis = aux;
    printf("Menor distância é entre os pontos X[%d] e Y[%d]:%d\n",aux_2,aux_2,menor_dis);
}

int main(){
    printf("Entre com os número de X:\n");
    coletor(x);
    printf("Entre com os número de Y:\n");
    coletor(y);
    printf("Distâncias:\n");
    distancias(x,y,distancia);
    menor_distancia(distancia,menor_dis);  
}