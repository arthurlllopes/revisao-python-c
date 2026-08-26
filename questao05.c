#include <stdio.h>

int main() {
    int a, b;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Maior: %d\n", a);
    } else {
        printf("Maior: %d\n", b);
    }

    return 0;
}