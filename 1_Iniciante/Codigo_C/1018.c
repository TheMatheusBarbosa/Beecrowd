#include <stdio.h>
 
int main() {
 
    int n1 = 0;

    scanf("%d", &n1);

    printf("%d\n", n1);
    printf("%d nota(s) de R$ 100,00\n", n1 / 100);
    
    n1 = n1 - ((n1 / 100) * 100);

    printf("%d nota(s) de R$ 50,00\n", n1 / 50);

    n1 = n1 - ((n1 / 50) * 50);

    printf("%d nota(s) de R$ 20,00\n", n1 / 20);

    n1 = n1 - ((n1 / 20) * 20);

    printf("%d nota(s) de R$ 10,00\n", n1 / 10);

    n1 = n1 - ((n1 / 10) * 10);

    printf("%d nota(s) de R$ 5,00\n", n1 / 5);

    n1 = n1 - ((n1 / 5) * 5);

    printf("%d nota(s) de R$ 2,00\n", n1 / 2);

    n1 = n1 - ((n1 / 2) * 2);

    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}