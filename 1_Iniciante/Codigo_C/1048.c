#include <stdio.h>
 
int main() {

    float sal, ajt = 0;
    scanf("%f", &sal);

    if(sal <= 400){
        ajt = 0.15;
    }else if(sal <= 800){
        ajt = 0.12;
    }else if(sal <= 1200){
        ajt = 0.10;
    }else if(sal <= 2000){
        ajt = 0.07;
    }else{
        ajt = 0.04;
    }

    printf("Novo salario: %.2f\n", sal * (1 + ajt));
    printf("Reajuste ganho: %.2f\n", sal * ajt);
    printf("Em percentual: %.0f %%\n", ajt * 100);

    return 0;
}