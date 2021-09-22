#include <stdio.h>
 
int main() {
 
    int nome = 0;
    double sal = 0;
    double vnd = 0;

    scanf("%s\n", &nome);
    scanf("%lf\n", &sal);
    scanf("%lf", &vnd);

    printf("TOTAL = R$ %.2lf\n", sal + (vnd * 0.15));

    return 0;
}