#include <stdio.h>

int main(){

    int num1, num2, i, sum = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num2 < num1){
        i = num1;
        num1 = num2;
        num2 = i;
    }

    for(i = num1 + 1; i < num2; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}