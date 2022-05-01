#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd, i, j;
    float *med;

    scanf("%d", &qtd);

    med = (float *)malloc(qtd * sizeof(int));

    for(i = 0; i < qtd; i++){
        float not[3];

        for(j = 0; j < 3; j++){
            scanf("%f", &not[j]);
        }

        med[i] = ((not[0] * 2) + (not[1] * 3) + (not[2] * 5)) / 10;
    }

    for(i = 0; i < qtd; i++){
        printf("%.1f\n", med[i]);
    }

    return 0;
}