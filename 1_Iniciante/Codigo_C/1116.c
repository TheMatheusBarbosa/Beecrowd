#include <stdio.h>

int main(){

    int qtd, i, x, y = 0;
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++){
        scanf("%d %d", &x, &y);

        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1f\n", (float)x / (float)y);
        }
    }
    
    return 0;
}