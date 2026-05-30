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
                            O último caracter será exibido 
                            Se for um número ele será convertido 
                            Para o seu respectivo valor binário */

    // String (Texto)
    std::string frase = "Capivaras são demais";

    /* Obs: Obrigatoriamente, para distinguir o Char de uma String utiliza-se '' e "" respectivamente*/

    // É possível determinar variáveis com valores imutáveis utilizando "const"
    const double PI =   3.14159; // Recomenda-se utilizar letras MAIÚSCULAS para constantes

    return 0;
}