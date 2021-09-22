#include <stdio.h>
 
int main() {
 
    int dis = 0;
    float gas = 0;

    scanf("%d\n", &dis);
    scanf("%f", &gas);

    printf("%.3f km/l\n", dis / gas);

    return 0;
}