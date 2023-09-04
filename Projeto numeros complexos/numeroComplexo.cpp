#include "numeroComplexo.h"

int main(){
    int algLinear = 0 , algComplexo = 0, algMaisComplexo =0;
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

    printf("%d, %d, %d", algLinear + 1, algComplexo + 1, algMaisComplexo + 1); // printf demonstra os valores de crescimento de maneira simples para visualização, o valor da variável linear poderia, nesse exemplo, iniciar com 79 a mais e ainda seria menor que o n³
    return 0;
}