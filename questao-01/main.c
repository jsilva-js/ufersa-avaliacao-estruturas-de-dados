#include <stdio.h>

int main() {
    int numero;

    // Solicita e ler cinco números
    for (int i = 0; i < 5; i++) {
        printf("Digite um número entre 1 e 30: ");
        scanf("%d", &numero);

        // Verificar se o número está dentro do intervalo entre 1 e 30
        if (numero >= 1 && numero <= 30) {
            // Imprime asteriscos de acordo com o número fornecido
            for (int j = 0; j < numero; j++) {
                printf("*");
            }
            printf("\n");
        } else {
            // Caso o número não esteja no intervalo permitido
            printf("Número inválido! Digite um número entre 1 e 30.\n");
            // Decrementa o contador para pedir o mesmo número novamente
            i--;
        }
    }

    return 0;
}