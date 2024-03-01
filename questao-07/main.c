#include <stdio.h>

// Função para verificar se um número é primo
int isPrime(int n, int i) {

    // Caso base: se n for menor ou igual a 1, não é primo
    if (n <= 1) {
        return 0;
    }

    // Caso base: se i atingir 1, o número é primo
    if (i == 1) {
        return 1;
    }

    // Verifica se n é divisível por i
    if (n % i == 0) {
        return 0; // n não é primo
    }

    // Chama recursivamente a função com i decrementado
    return isPrime(n, i - 1);
}



int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    // Chama a função isPrime com i iniciando em num/2
    if (isPrime(num, num / 2)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n",num);
    }

    return 0;
}
