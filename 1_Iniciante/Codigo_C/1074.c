#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd, i;
    int *num;
    scanf("%d", &qtd);

    num = (int *)malloc(qtd * sizeof(int));

    for(i = 0; i < qtd; i++){
        scanf("%d", &num[i]);
    }
    for(i = 0; i < qtd; i++){
        if(num[i] == 0){
            printf("NULL\n");
        }else{
            if(num[i] % 2 == 0){
                printf("EVEN ");
            }else{
                printf("ODD ");
            }
            if(num[i] > 0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}