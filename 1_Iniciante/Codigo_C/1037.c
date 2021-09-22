#include <stdio.h>
 
int main() {
 
    double n1 = 0;

    scanf("%lf", &n1);

    if(0 <= n1 && n1 <= 25){
        printf("Intervalo [0,25]\n");

    }else if(n1 > 25 && n1 <= 50){
        printf("Intervalo (25,50]\n");

    }else if(n1 > 50 && n1 <= 75){
        printf("Intervalo (50,75]\n");

    }else if(n1 > 75 && n1 <= 100){
        printf("Intervalo (75,100]\n");

    }else{
        printf("Fora de intervalo\n");

    }

    return 0;
}