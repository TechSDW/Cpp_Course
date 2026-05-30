#include <iostream>

/*  Para declarar uma variável é necessário definir seu tipo e o nome
    A estrutura ficaria da seguinte maneira:
    - tipo_variavel nome_variavel;
    - tipo_variavel nome_variavel = valor_variavel;
*/

int main(){
    // Integer (Números inteiros)
    int ano = 2026;

    // Double (Números com casas decimais)
    double preço = 10.5;

    // Boolean (Verdadeiro ou falso)
    bool capivarasDemais = true;

    // Char (Um único caracter)
    char letra = 'C'; /*    Caso o char possua 2 ou mais caracteres
                            O último caracter será exibido */

    // String (Texto)
    std::string frase = "Capivaras são demais";

    /* Obs: Obrigatoriamente, para distinguir o Char de uma String utiliza-se '' e "" respectivamente*/

    return 0;
}