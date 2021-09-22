#include <stdio.h>
 
int main() {
 
    int n1 = 0;
    int hr, min = 0;

    scanf("%d", &n1);

    hr = n1 / 3600;
    n1 = n1 - ((n1 / 3600) * 3600);

    min = n1 / 60;
    n1 = n1 - ((n1 / 60) * 60);

    printf("%d:%d:%d\n", hr, min, n1);

    return 0;
}