#include <stdio.h>

int main(){

    int qtd, i = 0, pum = 1;
    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        printf("%d %d %d PUM\n", pum, pum + 1, pum + 2);
        pum += 4;
    }

    return 0;
}