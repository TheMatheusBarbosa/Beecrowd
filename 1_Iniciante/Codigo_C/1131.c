#include <stdio.h>

int main(){

    int inter, gremio, rep = 0, pInt = 0, pGre = 0, pEmp = 0, i = 0;

    while(rep != 2){
        scanf("%d %d", &inter, &gremio);

        if(inter > gremio){
            pInt++;
        }else if(gremio > inter){
            pGre++;
        }else{
            pEmp++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &rep);
        i++;
    }

    printf("%d grenais\n", i);
    printf("Inter:%d\n", pInt);
    printf("Gremio:%d\n", pGre);
    printf("Empates:%d\n", pEmp);

    if(pInt > pGre){
        printf("Inter venceu mais\n");
    }else if(pGre > pInt){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}