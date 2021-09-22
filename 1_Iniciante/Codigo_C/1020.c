#include <stdio.h>
 
int main() {
 
    int n1 = 0;
    int ano, mes = 0;

    scanf("%d", &n1);

    ano = n1 / 365;
    n1 = n1 - ((n1 / 365) * 365);

    mes = n1 / 30;
    n1 = n1 - ((n1 / 30) * 30);

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", n1);

    return 0;
}