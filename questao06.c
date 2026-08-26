#include <stdio.h>

int main() {
    float media;

    printf("Media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 4) {
        printf("Final\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}