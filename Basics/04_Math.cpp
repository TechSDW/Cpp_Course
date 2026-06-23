#include <iostream>

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

    return 0;
}