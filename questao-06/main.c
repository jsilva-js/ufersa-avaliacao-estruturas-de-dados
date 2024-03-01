#include <stdio.h>

int mdc(int a, int b);

int main() {
    int num1, num2;

    printf("Digite dois números inteiros: \n");
    scanf("%d %d", &num1, &num2);

    int resultado = mdc(num1, num2);

    printf("O Máximo Divisor Comum de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}