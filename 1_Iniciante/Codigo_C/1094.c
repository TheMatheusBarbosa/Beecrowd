#include <stdio.h>

int main(){

    int qtd, i, num, coe = 0, rat = 0, sap = 0, tot =0;
    char tipo;

    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d %c", &num, &tipo);

        if(tipo == 'C'){
            coe += num;
        }else if(tipo == 'R'){
            rat += num;
        }else if(tipo == 'S'){
            sap += num;
        }

        tot += num;
    }

    printf("Total: %d cobaias\n", tot);
    printf("Total de coelhos: %d\n", coe);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", sap);
    printf("Percentual de coelhos: %.2f %%\n", ((float)coe / tot) * 100);
    printf("Percentual de ratos: %.2f %%\n", ((float)rat / tot) * 100);
    printf("Percentual de sapos: %.2f %%\n", ((float)sap / tot) * 100);

    return 0;
}