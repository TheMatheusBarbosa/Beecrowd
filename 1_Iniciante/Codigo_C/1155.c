#include <stdio.h>

int main(){

    float s = 0;
    int i = 1;

    for(i = 1; i <= 100; i++){
        s += 1 / (float)i;
    }

    printf("%.2f\n", s);

    return 0;
}