#include <stdio.h>
#include <math.h>

void calcularRaizesReais(int a, int b, int c) {

    int delta = b * b - 4 * a * c;

    if (delta >= 0) {
        double raiz1 = (-b + sqrt(delta)) / (2.0 * a);
        double raiz2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("Raiz 1: %lf\n", raiz1);
        printf("Raiz 2: %lf\n", raiz2);
    } else {
        printf("A função não possui raízes reais.\n");
    }
}

int main() {
    int a, b, c;

    printf("Digite os coeficientes (a, b, c) da função do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);
    
    calcularRaizesReais(a, b, c);

    return 0;
}