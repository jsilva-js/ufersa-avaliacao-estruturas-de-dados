#include <stdio.h>

// Função A(m, n) definida recursivamente
int A(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return A(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return A(m - 1, A(m, n - 1));
    }
}


// Função auxiliar para imprimir os resultados para A(x, y)
void imprimirResultados(int a, int b) {
    for (int x = 0; x < a; x++) {
        for (int y = 0; y < b; y++) {
            printf("A(%d, %d) = %d\n", x, y, A(x, y));
        }
    }
}

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Chamando a função auxiliar para exibir os resultados
    imprimirResultados(a, b);

    return 0;
}