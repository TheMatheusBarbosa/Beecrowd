#include <stdio.h>
 
int main() {
 
    double n1 = 0;
    double n2 = 0;

    scanf("%lf\n", &n1);
    scanf("%lf", &n2);

    printf("MEDIA = %.5lf\n", ((n1 * 3.5) + (n2 * 7.5)) / 11);

    return 0;
}