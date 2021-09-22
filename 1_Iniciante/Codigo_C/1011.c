#include <stdio.h>
 
int main() {

    double raio = 0;

    scanf("%lf", &raio);

    printf("VOLUME = %.3lf\n", (4.0 / 3.0) * 3.14159 * (raio * raio * raio));
 
    return 0;
}