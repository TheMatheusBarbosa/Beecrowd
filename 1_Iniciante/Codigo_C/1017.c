#include <stdio.h>
 
int main() {
 
    int n1 = 0;
    int n2 = 0;

    scanf("%d\n", &n1);
    scanf("%d", &n2);

    printf("%.3f\n", (n1 * n2) / 12.0);

    return 0;
}