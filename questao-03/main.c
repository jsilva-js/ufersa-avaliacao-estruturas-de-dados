#include <stdio.h>

void encontraTriplosPitagoricos(int n) {
    for (int cateto1 = 1; cateto1 <= n; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= n; cateto2++) {
            // Calcula o quadrado da hipotenusa
            int hipotenusaAoQuadrado = cateto1 * cateto1 + cateto2 * cateto2;
            
            // Encontra a hipotenusa como inteiro, se existir
            int hipotenusa = (int)sqrt(hipotenusaAoQuadrado);
            
            // Verifica se é um triplo pitagórico válido
            if (hipotenusa <= n && hipotenusa * hipotenusa == hipotenusaAoQuadrado) {
                printf("Triplo Pitagórico: %d, %d, %d\n", cateto1, cateto2, hipotenusa);
            }
        }
    }
}

int main() {
    int n;
    
    // Solicita ao usuário o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    // Chama a função para encontrar triplos pitagóricos
    encontraTriplosPitagoricos(n);
    
    return 0;
}