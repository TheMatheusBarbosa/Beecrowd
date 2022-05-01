#include <stdio.h>

int main(){

    int x, y = 0;
    scanf("%d %d", &x, &y);

    while(x != 0 && y != 0){

        if(x > 0){
            if(y > 0){
                printf("primeiro\n");
            }else{
                printf("quarto\n");
            }
        }else{
            if(y > 0){
                printf("segundo\n");
            }else{
                printf("terceiro\n");
            }
        }
        
        scanf("%d %d", &x, &y);
    }

    return 0;
}