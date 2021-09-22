#include <stdio.h>
 
int main() {

    double n1, n2, n3 = 0;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("TRIANGULO: %.3lf\n", (n1 * n3) / 2);
    printf("CIRCULO: %.3lf\n", 3.14159 * (n3 * n3));
    printf("TRAPEZIO: %.3lf\n",((n1 + n2) * n3) / 2);
    printf("QUADRADO: %.3lf\n", n2 * n2);
    printf("RETANGULO: %.3lf\n", n1 * n2);
 
    return 0;
}