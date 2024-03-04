#include <stdio.h>
#include <math.h>

void testarRaizesReais(int a, int b, int c) {
    int delta = b * b - 4 * a * c;

    if (delta >= 0) {
        printf("A função possui raízes reais.\n");
    } else {
        printf("A função não possui raízes reais.\n");
    }
}


int main() {
    int a, b, c;

    printf("Digite os coeficientes (a, b, c) da função do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);

    testarRaizesReais(a, b, c);

    return 0;
}