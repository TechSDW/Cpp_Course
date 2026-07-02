#include <iostream>

int main(){
    std::string animal = "capivara";

    // Executa algum comando caso uma certa condição seja verdadeira
    if (animal == "capivara"){
        std::cout << "Este animal é demais\n";
    }

    // Se a primeira condição é falsa, verifica-se outra condição
    else if (animal == "gato"){
        std::cout << "Este animal é legal, mas não demais" << std::endl;
    }

    // Caso as outras condições não forem cumpridas, roda-se esse código
    else{
        std::cout << ":/" << "\n";
    }

    // Outra forma de escrever o IF
    animal == "capivara" ? std::cout << "Capivaras são demais" : std::cout << "Este animal não é demais";
    std::cout << (animal == "capivara" ? "Capivaras são demais" : "Este animal não é demais");

    /* Operadores lógicos */
    /*
    É possível adicionar mais condições dentro de 1 IF
    && = Ambas condições precisam ser verdadeiras
    || = Uma das duas precisa ser verdadeira
    ! = Inverte a operação lógica
    Ex:
        if (animal == "capivara" || animal == "Capivara") {}
    */

    int num;

    /* Switch */
    // Utilizado para que não seja necessário colocar diversos IFs repetidamente
    switch (num) // Funciona apenas com integers
    {
    case 0:
        std::cout << "Você digitou o número 0";
        break;
    case 1:
        std::cout << "O número 1 foi escolhido";
        break;
    default: // Refere-se ao else
        std::cout << "Você digitou um número diferente de 0 e 1";
    }

    // OBS: Em casa caso é comum colocar um break ao final, pois isso impede que os casos seguintes sejam executados

    return 0;
}