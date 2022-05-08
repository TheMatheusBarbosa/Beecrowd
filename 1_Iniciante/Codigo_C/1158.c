#include <stdio.h>
#include <stdlib.h>

int main(){

    int rep, i, j, ini, qtd;
    int *res;
    
    scanf("%d", &rep);
    
    res = (int *)malloc(rep * sizeof(int));

    for(i = 0; i < rep; i++){
        res[i] = 0;
        scanf("%d %d", &ini, &qtd);

        for(j = 0; j < qtd; j){
            if(ini % 2 == 1){
                res[i] += ini;
                j++;
            }

            ini++;
        }
    }

    for(i = 0; i < rep; i++){
        printf("%d\n", res[i]);
    }

    return 0;
}