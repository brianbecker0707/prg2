#include "numeroComplexo.h"

int main(){
    int algLinear = 50 , algComplexo = 60, algMaisComplexo =0;
    //algoritmos para demonstrar o escalamento de repetições
    for (int i = 0; i < 4; ++i) {
        algLinear ++;
        algComplexo ++;
        algMaisComplexo ++;
        for (int j = 0; j < 4; ++j) //for dentro de for para fazer uma exponencial, no caso n²
        {
            algComplexo ++;
            algMaisComplexo ++;
            for (int k = 0; k < 4; ++k) //for dentro de for dentro de for, gerando assim um n³
            {
                algMaisComplexo++;
            }
        }
    }

    printf("%d, %d, %d", algLinear, algComplexo, algMaisComplexo); //O printf mostra que mesmo os números iniciais sendo bem maiores, o terceiro exemplo que seria n³, ainda ultrapassou os valores, demonstrando o quão relevante é.
    return 0;
}