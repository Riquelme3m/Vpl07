#pragma once
#include <string>
#include <vector>
#include <map>

class Intruso{
    /*Continue a implementação da classe Intruso*/
    private:
        std::vector<std::string>dado1;
        std::map<std::string,std::string>entrada1;
        std::map<std::string,std::string>entrada2;
        



    public:
    
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};