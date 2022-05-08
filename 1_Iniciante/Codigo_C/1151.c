#include <stdio.h>

int main(){

    int num, i, fib1, fib2, fibR = 0;
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        if(i == 0){
            fib1 = 0;
            fib2 = 0;
        }else if(i == 1){
            fib1 = fib2;
            fib2 = 1;
        }else{
            fib1 = fib2;
            fib2 = fibR;
        }

        printf("%d", fib2);

        if(i < num - 1){
            printf(" ");
        }

        fibR = fib1 + fib2;
    }
    
    printf("\n");

    return 0;
}