#include <stdio.h>
 
int main() {
 
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    scanf("%d\n", &n3);
    scanf("%d", &n4);

    printf("DIFERENCA = %d\n", (n1 * n2) - (n3 * n4));

    return 0;
}