#include <stdio.h>
 
int main() {

    char cat1[15], cat2[15], cat3[15] = "";
    scanf("%s", cat1);
    scanf("%s", cat2);
    scanf("%s", cat3);

    if(cat1[0] == 'v'){
        if(cat2[0] == 'a'){
            if(cat3[0] == 'c'){
                printf("aguia\n");
            }else if(cat3[0] == 'o'){
                printf("pomba\n");
            }
        }else if(cat2[0] == 'm'){
            if(cat3[0] == 'o'){
                printf("homem\n");
            }else if(cat3[0] == 'h'){
                printf("vaca\n");
            }
        }
    }else if(cat1[0] == 'i'){
        if(cat2[0] == 'i'){
            if(cat3[2] == 'm'){
                printf("pulga\n");
            }else if(cat3[2] == 'r'){
                printf("lagarta\n");
            }
        }else if(cat2[0] == 'a'){
            if(cat3[0] == 'h'){
                printf("sanguessuga\n");
            }else if(cat3[0] == 'o'){
                printf("minhoca\n");
            }
        }
    }
    
    return 0;
}