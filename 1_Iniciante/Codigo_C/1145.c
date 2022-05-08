#include <stdio.h>

int main(){

    int qtd, lim, i, j = 0;
    scanf("%d %d", &qtd, &lim);

    for(i = 1; i <= lim; i){
        for(j = 0; j < qtd && i <= lim; j++){
            printf("%d", i);

            if(j == qtd - 1){
                printf("\n");
            }else{
                printf(" ");
            }

            i++;
        }
    }

    return 0;
}