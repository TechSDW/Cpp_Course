#include <iostream>

int main(){
    // Lembre-se de sempre adicionar um ";" ao final de cada linha

    // Utiliza-se std::cout para projetar algum texto no terminal
    std::cout << "Capivaras sao demais" << std::endl; /*  Além disso, os caracteres "<<" são utilizados para indicar o conteúdo do texto */
    std::cout << "Capivaras sao sensacionais" << "\n"; /* Pode-se utilizar o "std::endl" ou "\n" para inserir uma quebra de linha
                                                          Sem a quebra de linha o texto irá aprecer colado um no outro */

    // Para receber algum dado do usuário utilize std::cin
    int idade; // Defini uma variável para armazenar o input do usuário
    std::cout << "Digite a sua idade: ";
    std::cin >> idade; // Aqui eu indico onde quero armazenar o valor recebido
    
    // Caso o usuário precise inserir espaços use o std::getline
    std::string nome;
    std::cout << "Digite o seu nome completo: ";
    std::getline(std::cin >> std::ws, nome); /* Esta função lê todo o texto antes da primeira quebra de linha 
                                                Caso queira modificar isso, basta adicionar uma vírgula após o nome da variável
                                                E colocar entre parênteses o caracter desejado, o restante do texto será DESCARTADO
                                                Por exemplo, std::getline(std::cin, nome, ',') vai pegar todo o texto antes da primeira vírgula */
    
    /* OBS IMPORTANTE: 
    Usar o getline após um cin fará com que a quebra de linha aplicada após o primeiro input seja considerada como o input do getline
    Para evitar esse problema, coloca-se um std::ws para remover todo o espaço vazio antes de qualquer input do usuário
    */

    return 0;
}