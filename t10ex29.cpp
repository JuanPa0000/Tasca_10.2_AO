#include <iostream>
#include <string>

int main(){
    int any;
    std::cout << "Introdueix l'any: ";
    std::cin >> any;

    bool resultat = false;

    if (any%100==0){
        if(any%400==0){
            resultat = true;
        }
    } else if(any % 4 == 0) {
        resultat = true;
    }

    if (resultat){
        std::cout << any << " és un any de traspàs" << std::endl;
    } else {
        std::cout << any << " no és de traspàs" << std::endl;
    }
}