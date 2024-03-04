#include <stdio.h>

int inverterDigitos(int numero) {
    int resultado = 0;

    while (numero > 0) {
        resultado = resultado * 10 + numero % 10;
        numero /= 10;
    }

    return resultado;
}

int main() {
    int numeroOriginal, numeroInvertido;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numeroOriginal);

    // chama a função para inverter os dígitos
    numeroInvertido = inverterDigitos(numeroOriginal);

    printf("Numero inserido: %d\n", numeroOriginal);
    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}