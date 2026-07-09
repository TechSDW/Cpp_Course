#include <iostream>

// Loops repetem certas linhas de código

int main(){
    std::string animal;
    
    /* While loops */
    // Utilizado quando o valor que está sendo utilizado na condição pode mudar de acordo com as ações do código
    while (animal != "capivara")
    {
        std::cout << "Escolha um animal: ";
        std::getline(std::cin, animal);
    };

    int number;

    /* Do while loops */
    // Executa certa linha de código antes de fazer a verficação da condição
    // Dessa forma, não é necessário escrever o mesmo código duas vezes
    // OBS: No exemplo anterior, não era necessário colocar o DO pois a condição já era verdadeira
    do {
        std::cout << "Digite um número menor que 10: ";
        std:: cin >> number;
    } while (number < 10);

    /* Sem o DO WHILE */
    /*
    std::cout << "Digite um número menor que 10: ";
    std:: cin >> number;

    while (number < 10)
    {
        std::cout << "Digite um número menor que 10: ";
        std:: cin >> number;
    }
    */

    /* For loops */
    // Utilizado quando é necessário repetir a mesma linha de código um número determinado de vezes
    for (int i = 1; i <= 10; i++){
        std::cout << "Capivaras são demais\n";
    }

    /* BREAK */
    // Como visto anteriormente nos SWITCHs, serve para quebrar completamente o loop

    /* CONTINUE */
    // Ao contrário do BREAK, ele irá pular a repetição atual

    /* For each loop */

    return 0;
};