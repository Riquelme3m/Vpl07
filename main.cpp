#include <iostream>
#include "intruso.hpp"

int main(){
    int num_entradas, i;
    
    std::string senha;
    Intruso intruso;
    i=2;
    std::cin >> num_entradas;

    for(i=0; i < 2; i++){
        std::cin.ignore();
        std::getline(std::cin, senha);
        intruso.set_senha_vazada(senha);
    }
    std::cout << intruso.crack_senha() <<std::endl;
    
    return 0;
}