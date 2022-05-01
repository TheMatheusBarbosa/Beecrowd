#include <stdio.h>

int main(){

    int x, y, tmp, i, sum = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        tmp = x;
        x = y;
        y = tmp;
    }

    for(i = x; i <= y; i ++){
        if(i % 13 != 0){
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}