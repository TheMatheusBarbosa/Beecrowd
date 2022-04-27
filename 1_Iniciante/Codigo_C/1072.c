#include <stdio.h>

int main(){

    int qtd, i, num, in = 0, out = 0;
    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d", &num);

        if(num >= 10 && num <= 20){
            in++;
        }else{
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}