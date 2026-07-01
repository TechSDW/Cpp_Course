#include <iostream>
#include <cmath> // Necessário para a seção de funções

int main(){
    int x = 3;
    int y = 2;

    // Adição (+)
    x = x + y;
    x += y;
    x++; // Adiciona 1 ao valor de x

    // Subtração (-)
    x = x - y;
    x -= y;
    x--; // Subtrai 1 ao valor de x

    // Multiplicação (*)
    x = x * y;
    x *= y;

    // Divisão (/)
    x = x / y;
    x /= y;

    // Resto da divisão (%)
    int z = x % y;
    // Resultado: 1

    /* Funções Matemáticas */
    double w;
    double v;

    // Potenciação
    w = pow(3, 2); // Resultado: 3 ^ 2 = 9

    // Radiciação
    w = sqrt(9); // Resultado: 3
    
    // Modulo
    w = abs(-4); // Resultado: 4

    // Arredondamento
    w = round(3.5); // Resultado: 4
    w = ceil(3.1); // Resultado: 4
    w = floor(3.9); // Resultado: 4

    return 0;
}