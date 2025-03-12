#include <iostream>
#include <string>

int main(){
    std::string nom;
    std::string cognom;

    std::cout << "Escriu el teu nom: ";
    std::getline(std::cin,nom);

    std::cout << "Escriu el teu cognom: ";
    std::cin >> cognom;

    std::cout << "Hola, " + nom + " " + cognom << std::endl;
    return 0;
}