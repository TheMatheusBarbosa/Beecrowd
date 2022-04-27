#include <stdio.h>

int main() {

    float i, num, pos = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &num);

        if(num > 0){
            pos++;
        }
    }

    printf("%.0f valores positivos\n", pos);

    return 0;
}