#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1 = 0;
    float x2, y2 = 0;
    double dis = 0;

    scanf("%f %f\n", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", dis);
 
    return 0;
}