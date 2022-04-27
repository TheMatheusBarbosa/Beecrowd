#include <stdio.h>

int main(){

    int num, i = 0;
    scanf("%d", &num);

    for(i = 2; i <= num; i+=2){
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}