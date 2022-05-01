#include <stdio.h>

int main(){

    int m, n, tmp, i, sum = 0;
    scanf("%d %d", &m, &n);

    while(m > 0 && n > 0){
        sum = 0;

        if(m > n){
            tmp = m;
            m = n;
            n = tmp;
        }

        for(i = m; i <= n; i++){
            sum += i;
            printf("%d ", i);
        }

        printf("Sum=%d\n", sum);

        scanf("%d %d", &m, &n);
    }

    return 0;
}