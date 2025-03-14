#include <iostream>
#include <string>

int main(){
    int anyActual = 2025;
    std::string persones[2][4] = {
        {"Joan","Pere","Adrian","Pablo"},
        {"1980","2000","2005","2008"}
    };

    std::cout << anyActual << std::endl;
    std:: cout << std::endl;
    
    std::cout << persones << std::endl;
    std::cout << "Nom     " << std::endl;
    std::cout << "Data Naixement     " << std::endl;
    std::cout << "Anys que farà aquest any" << std::endl;

};