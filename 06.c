#include <stdio.h>

char finaliza = 1, confirma;
const char  *resultado;
int voto = 0, quant_votos = 0, nulos = 0, em_branco = 0, cand_01 = 0, cand_02 = 0, total_votos = 0;
float porc_validos, porc_nulos, porc_brancos, porc_cand1, porc_cand2;


int main(){

    while(finaliza == 1){

        printf("Selecione o seu candidato:\n[05] Paulo\n[07] Renata\n");
        scanf("%d",&voto);
        if(voto<0){
            printf("Eleição finalizada.\n");
            voto -= voto;   
            finaliza = 0;
            break;
        }
        switch (voto)
        {
        case 5:
            printf("Você está votando em Paulo. Confirma seu voto?[1]Sim[2]Não");
            scanf("%d",&confirma);
            if(confirma == 1){
            cand_01 ++;}
            break;
        case 7:
            printf("Você está votando em Renata. Confirma seu voto?[1]Sim[2]Não");
            scanf("%d",&confirma);
            if(confirma == 1){
            cand_02 ++;}
            break;
        case 0:
            printf("Você está votando em branco. Confirma seu voto?[1]Sim[2]Não");
            scanf("%d",&confirma);
            if(confirma == 1){
            em_branco ++;}
            break;
        default:
            printf("Você está votando nulo. Confirma seu voto?[1]Sim[2]Não");
            scanf("%d",&confirma);
            if(confirma == 1){
            nulos ++;}
            break;
        }

        total_votos = cand_01 + cand_02 + nulos + em_branco;
        int votos_validos = cand_01 + cand_02;
        porc_validos = (float)votos_validos/total_votos*100;
        porc_nulos = (float)nulos/total_votos*100;
        porc_brancos = (float)em_branco/total_votos*100;
        resultado = cand_01 > cand_02 ? "Paulo" : "Renata";
        porc_cand1 = (float)cand_01/total_votos*100;
        porc_cand2 = (float)cand_02/total_votos*100;
    }  
        printf("O vencedor foi %s. Com %d votos.\n",resultado,cand_01); 
        printf("Paulo teve %.2f%% dos votos.\n",porc_cand1);
        printf("Renata teve %.2f%% dos votos.\n",porc_cand2);
        printf("%.2f%% dos votos foram nulos.\n",porc_nulos);
        printf("%.2f%% dos votos foram em branco.\n", porc_brancos);

    }
