#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    soma = a + b;

    printf("Soma: %d\n", soma);

    return 0;
}