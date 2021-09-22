#include <stdio.h>
 
int main() {
 
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("%d eh o maior\n", n1);

    }else if(n2 >= n1 && n2>= n3){
        printf("%d eh o maior\n", n2);

    }else{
        printf("%d eh o maior\n", n3);

    }

    return 0;
}