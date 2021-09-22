#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c = 0;
    double mais, menos = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(2 * a != 0 && sqrt(pow(b, 2) - 4 * a * c) >= 0){
        mais = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        menos = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        printf("R1 = %.5lf\n", mais);
        printf("R2 = %.5lf\n", menos);

    }else{
        printf("Impossivel calcular\n");

    }

    return 0;
}