#include <stdio.h>

int main() {

    float i, num, pos = 0, sum = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &num);

        if(num > 0){
            pos++;
            sum += num;
        }
    }

    printf("%.0f valores positivos\n", pos);
    printf("%.1f\n", sum / pos);

    return 0;
}