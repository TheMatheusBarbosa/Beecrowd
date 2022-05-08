#include <stdio.h>

int main(){

    float s = 1;
    int i = 1, j = 2;

    for(i = 3; i <= 39; i += 2){
        s += (float)i / (float)j;
        j *= 2;
    }

    printf("%.2f\n", s);

    return 0;
}