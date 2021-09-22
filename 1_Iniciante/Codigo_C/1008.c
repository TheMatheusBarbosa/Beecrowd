#include <stdio.h>
 
int main() {
 
    int func = 0;
    int hr = 0;
    float sal = 0;

    scanf("%d\n", &func);
    scanf("%d\n", &hr);
    scanf("%f", &sal);

    printf("NUMBER = %d\n", func);
    printf("SALARY = U$ %.2f\n", hr * sal);

    return 0;
}