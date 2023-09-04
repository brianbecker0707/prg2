#include "numeroComplexo.h"

int main() {
    int algLinear = 50, algComplexo = 40, algMaisComplexo = 0;
    // Algoritmo Linear demonstra O(n) que é o tempo constante.
    for (int i = 0; i < 4; ++i) {
        algLinear++;
    }

    // Algoritmo Complexo demonstra O(n²) que seria tempo ao quadrado.
    for (int i = 0; i < 4; ++i) {
        algComplexo++;
        for (int j = 0; j < 4; ++j) { // O(n)
            algComplexo++;
        }
    }

    // Algoritmo Mais Complexo faz um exemplo de O (n³) que seria tempo ao cubo.
    for (int i = 0; i < 4; ++i) {
        algMaisComplexo++;
        for (int j = 0; j < 4; ++j) { // O (n²)
            algMaisComplexo++;
            for (int k = 0; k < 4; ++k) { // O(n)
                algMaisComplexo++;
            }
        }
    }

    printf("Algoritmo linear: %d\nAlgoritmo complexo: %d\nAlgoritmo mais complexo: %d", algLinear, algComplexo, algMaisComplexo);
    //O printf exibe a demonstração dos algrismos sendo o linear apenas ele mesmo enquanto o complexo e mais complexo são notações de Big O
    return 0;
}
