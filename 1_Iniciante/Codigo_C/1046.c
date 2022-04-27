#include <stdio.h>
 
int main() {

    int ini, fim = 0;
    scanf("%d %d", &ini, &fim);

    if(ini > fim){
        printf("O JOGO DUROU %d HORA(S)\n", 24 - ini + fim);
    }else if(ini < fim){
        printf("O JOGO DUROU %d HORA(S)\n", fim - ini);
    }else{
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}