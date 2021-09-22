#include <stdio.h>
 
int main() {
 
    double n1 = 0;
    double n2 = 0;
    double n3 = 0;

    scanf("%lf\n", &n1);
    scanf("%lf\n", &n2);
    scanf("%lf", &n3);

    printf("MEDIA = %.1lf\n", ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10);

    return 0;
}