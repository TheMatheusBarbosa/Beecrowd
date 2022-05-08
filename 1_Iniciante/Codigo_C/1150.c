#include <stdio.h>

int main(){

    int x, z, i, qtd = 1;
    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x){
        scanf("%d", &z);
    }

    for(i = x; i < z; i){
        i += x + qtd;
        qtd++;
    }

    printf("%d\n", qtd);

    return 0;
}