#include <stdio.h>
 
int main() {

    float a, b, c = 0;
    scanf("%f %f %f", &a, &b, &c);

    if(a >= b && a >= c){
        if(a < b + c){
            printf("Perimetro = %.1f\n", a + b + c);
        }else{
            printf("Area = %.1f\n", ((a + b) * c) / 2);
        }
    }else if(b >= a && b >= c){
        if(b < a + c){
            printf("Perimetro = %.1f\n", a + b + c);
        }else{
            printf("Area = %.1f\n", ((a + b) * c) / 2);
        }
    }else if(c >= a && c >= b){
        if(c < a + b){
            printf("Perimetro = %.1f\n", a + b + c);
        }else{
            printf("Area = %.1f\n", ((a + b) * c) / 2);
        }
    }
    
    return 0;
}