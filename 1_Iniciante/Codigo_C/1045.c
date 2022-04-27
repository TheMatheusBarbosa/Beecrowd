#include <stdio.h>
 
int main() {

    float a, b, c, tmp = 0;
    scanf("%f %f %f", &a, &b, &c);

    if (a < c) {
        tmp = c;
        c = a;
        a = tmp;
    }
    if (a < b) {
        tmp = b;
        b = a;
        a = tmp;
    }
    if (b < c) {
        tmp = c;
        c = b;
        b = tmp;
    }

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if((a*a) == ((b*b) + (c*c))){
            printf("TRIANGULO RETANGULO\n");
        }
        if((a*a) > ((b*b) + (c*c))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a*a) < ((b*b) + (c*c))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a == b || a == c || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}