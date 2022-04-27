#include <stdio.h>

int main() {

    float sal, imp = 0;
    scanf("%f", &sal);

    if(sal <= 2000){
        printf("Isento\n");
    }else{
        if(sal <= 3000){
            imp = (sal - 2000) * 0.08;
        }else if(sal <= 4500){
            imp = (1000 * 0.08) + ((sal - 3000) * 0.18);
        }else{
            imp = (1000 * 0.08) + (1500 * 0.18) + ((sal - 4500) * 0.28);
        }
        printf("R$ %.2f\n", imp);
    }

    return 0;
}