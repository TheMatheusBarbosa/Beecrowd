#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd, i, j, x, y, tmp = 0;
    int *sum;

    scanf("%d", &qtd);

    sum = (int *)malloc(qtd * sizeof(int));

    for(i = 0; i < qtd; i++){
        scanf("%d %d", &x, &y);
        
        if(x > y){
            tmp = x;
            x = y;
            y = tmp;
        }

        sum[i] = 0;

        for(j = x + 1; j < y; j++){
            if(j % 2 != 0){
                sum[i] += j;
            }
        }
    }

    for(i = 0; i < qtd; i++){
        printf("%d\n", sum[i]);
    }

    return 0;
}