#include <stdio.h>

int main(){

    int num, i = 0;
    scanf("%d", &num);

    for(i = 1; i <= num; i+=2){
        printf("%d\n", i);
    }

    return 0;
}