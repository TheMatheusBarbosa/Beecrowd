#include <stdio.h>

int main(){

    int n, i, pos, mai = 0;
    
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);

        if(n > mai){
            mai = n;
            pos = i;
        }
    }
    
    printf("%d\n", mai);
    printf("%d\n", pos);

    return 0;
}