#include <stdio.h>

void converteParaRomano(int num);

int main() {
    printf("Decimal\tRomano\n");
    printf("=====================\n");

    for (int i = 1; i <= 100; i++) {
        printf("%d\t", i);
        converteParaRomano(i);
        printf("\n");
    }

    return 0;
}

void converteParaRomano(int num) {
    int valores[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *simbolos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 9; i++) {
        while (num >= valores[i]) {
            printf("%s", simbolos[i]);
            num -= valores[i];
        }
    }
}
