#include <stdio.h>
#include <math.h>
 
int main() {
 
    double n1 = 0;
    int nota = 0;
    int cent = 0;

    scanf("%lf", &n1);

    cent = n1 - floor(n1);
    nota = n1 - cent;
    cent = (n1 - floor(n1)) * 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota / 100);
    
    nota = nota - ((nota / 100) * 100);

    printf("%d nota(s) de R$ 50.00\n", nota / 50);

    nota = nota - ((nota / 50) * 50);

    printf("%d nota(s) de R$ 20.00\n", nota / 20);

    nota = nota - ((nota / 20) * 20);

    printf("%d nota(s) de R$ 10.00\n", nota / 10);

    nota = nota - ((nota / 10) * 10);

    printf("%d nota(s) de R$ 5.00\n", nota / 5);

    nota = nota - ((nota / 5) * 5);

    printf("%d nota(s) de R$ 2.00\n", nota / 2);

    nota = nota - ((nota / 2) * 2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", nota);

    printf("%d moeda(s) de R$ 0.50\n", cent / 50);

    cent = cent - ((cent / 50) * 50);

    printf("%d moeda(s) de R$ 0.25\n", cent / 25);

    cent = cent - ((cent / 25) * 25);

    printf("%d moeda(s) de R$ 0.10\n", cent / 10);

    cent = cent - ((cent / 10) * 10);

    printf("%d moeda(s) de R$ 0.05\n", cent / 5);

    cent = cent - ((cent / 5) * 5);

    printf("%d moeda(s) de R$ 0.01\n", cent);

    return 0;
}