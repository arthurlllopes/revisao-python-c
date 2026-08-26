#include <stdio.h>

int main() {
    int quantidade = 0, numero;

    for (int i = 0; i < 5; i++) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero > 0) {
            quantidade++;
        }
    }

    printf("Positivos: %d\n", quantidade);

    return 0;
}