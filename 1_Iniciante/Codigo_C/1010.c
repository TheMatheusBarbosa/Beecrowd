#include <stdio.h>
 
int main() {
 
    int cod1, cod2 = 0;
    int qtd1, qtd2 = 0;
    float vlr1, vlr2 = 0;

    scanf("%d %d %f\n", &cod1, &qtd1, &vlr1);
    scanf("%d %d %f", &cod2, &qtd2, &vlr2);

    printf("VALOR A PAGAR: R$ %.2f\n", (qtd1 * vlr1) + (qtd2 * vlr2));

    return 0;
}