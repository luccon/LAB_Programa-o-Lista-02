#include <stdio.h>

char confirma, finaliza = 1, resultado;
int voto = 0, quant_votos = 0, nulos = 0, em_branco = 0, cand_01 = 0, cand_02 = 0, total_votos = 0;

int main(){

    while(finaliza == 1){

        printf("Selecione o seu candidato:\n[05] Paulo\n[07] Renata\n");
        scanf("%d",&voto);
        if(voto<0){
            printf("Eleição finalizada.");   
            finaliza = 0;
            break;
        }
        switch (voto)
        {
        case '5':
            printf("Você está votando em Paulo. Confirma seu voto?[1]Sim[2]Não");
            scanf(" %c",&confirma);
            if(confirma == 1){
            cand_01 ++;}
            break;
        case '7':
            printf("Você está votando em Renata. Confirma seu voto?[1]Sim[2]Não");
            scanf(" %c",&confirma);
            if(confirma == 1){
            cand_02 ++;}
            break;
        case '0':
            printf("Você está votando em branco. Confirma seu voto?[1]Sim[2]Não");
            scanf(" %c",&confirma);
            if(confirma == 1){
            em_branco ++;}
            break;
        default:
            printf("Você está votando nulo. Confirma seu voto?[1]Sim[2]Não");
            scanf(" %c",&confirma);
            if(confirma == 1){
            nulos ++;}
            break;
        }

        resultado = cand_01 > cand_02 ? 'Paulo venceu' : 'Renata venceu';
        total_votos = cand_01 + cand_02 + nulos + em_branco;

        printf("O candidato %c.\n",resultado,)





    }
}