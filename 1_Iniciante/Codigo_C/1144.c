#include <stdio.h>

int main(){

    int qtd, i = 0, x = 1;
    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        printf("%d %d %d\n", x, x * x, x * x * x);
        printf("%d %d %d\n", x, (x * x) + 1, (x * x * x) + 1);
        x++;
    }

    return 0;
}