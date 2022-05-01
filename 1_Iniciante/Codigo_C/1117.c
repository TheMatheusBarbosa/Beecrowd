#include <stdio.h>

int main(){
    
    int i = 0;
    float not, med = 0;

    for(i = 0; i < 2; i){
        scanf("%f", &not);

        if(not < 0 || not > 10){
            printf("nota invalida\n");
        }else{
            med += not;
            i++;
        }
    }

    printf("media = %.2f\n", med / 2);
    
    return 0;
}