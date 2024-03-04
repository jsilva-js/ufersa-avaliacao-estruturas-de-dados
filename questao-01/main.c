#include <stdio.h>

int main() {
    int numero;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número entre 1 e 30: ");
        scanf("%d", &numero);

        if (numero >= 1 && numero <= 30) {
            for (int j = 0; j < numero; j++) {
                printf("*");
            }
            printf("\n");
        } else {
            printf("Número inválido! Digite um número entre 1 e 30.\n");
            // Decrementa o contador para pedir o mesmo número novamente
            i--;
        }
    }

    return 0;
}