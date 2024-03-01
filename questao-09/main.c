#include <stdio.h>

int produtoRecursivo(int x1, int x2);

int main() {

    int x1, x2;

    printf("Digite o valor de x1: ");
    scanf("%d", &x1);

    printf("Digite o valor de x2: ");
    scanf("%d", &x2);

    // Chama a função recursiva e exibe o resultado
    int resultado = produtoRecursivo(x1, x2);
    printf("O produto é: %d\n", resultado);

    return 0;
}

// Definição da função recursiva
int produtoRecursivo(int x1, int x2) {
    
    // Caso base: se um dos valores for zero, o produto é zero
    if (x1 == 0 || x2 == 0) {
        return 0;
    }
    // Caso recursivo: reduzindo o problema para um menor
    else {
        // A função é chamada novamente com x1 e x2 reduzidos
        // até atingir o caso base
        return x1 + produtoRecursivo(x1, x2 - 1);
    }
}
