#include <stdio.h>
 
int main() {
 
    int cod = 0;
    int qtd = 0;

    scanf("%d %d", &cod, &qtd);

    if(cod == 1){
        printf("Total: R$ %.2f\n", (float)qtd * 4);
    }

    if(cod == 2){
        printf("Total: R$ %.2f\n", (float)qtd * 4.5);
    }

    if(cod == 3){
        printf("Total: R$ %.2f\n", (float)qtd * 5);
    }

    if(cod == 4){
        printf("Total: R$ %.2f\n", (float)qtd * 2);
    }

    if(cod == 5){
        printf("Total: R$ %.2f\n", (float)qtd * 1.5);
    }

    return 0;
}