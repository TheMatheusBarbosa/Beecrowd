#include <stdio.h>

int main(){
    
    int i, rep = 0;
    float not, med = 0;

    for(i = 0; i < 2; i){
        rep = 0;

        scanf("%f", &not);

        if(not < 0 || not > 10){
            printf("nota invalida\n");
        }else{
            med += not;
            i++;
        }

        if(i == 2){
            printf("media = %.2f\n", med / 2);

            while (rep != 1 && rep != 2){
                printf("novo calculo (1-sim 2-nao)\n");

                scanf("%d", &rep);

                if(rep == 1){
                    i = 0;
                    med = 0;
                }
            }
        }
    }
    
    return 0;
}