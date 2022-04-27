#include <stdio.h>

int main(){

    int num, i = 0;
    scanf("%d", &num);

    for(i = num; i <= num + 11; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}