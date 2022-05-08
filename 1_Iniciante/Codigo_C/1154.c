#include <stdio.h>

int main(){

    int idd = 0, sumIdd = 0, qtd = 0;

    while(idd >= 0){
        scanf("%d", &idd);
        
        if(idd >= 0){
            sumIdd += idd;
            qtd++;
        }
    }

    printf("%.2f\n", (float)sumIdd / (float)qtd);

    return 0;
}