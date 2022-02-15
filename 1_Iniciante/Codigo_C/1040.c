#include <stdio.h>
 
int main() {

    float n1, n2, n3, n4 = 0.0;
    float exm = 0.0;
    float media = 0.0;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

    if(media > 7){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");

    }

    if(media >= 5 && media < 7){
        scanf("%f", &exm);

        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exm);

        if((media + exm) / 2 > 5){
            printf("Aluno aprovado.\n");

        }else{
            printf("Aluno reprovado.\n");

        }
    
        printf("Media final: %.1f\n", (media + exm) / 2);

    }

    if(media < 5){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");

    }

    return 0;
}