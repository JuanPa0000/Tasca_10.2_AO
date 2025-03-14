#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string lista[] = {"Maria","Joan","Pablo","Pere"};
    char c;

    std::cout << "Introdueix un caràcter: ";
    std::cin >> c;

    for (std::string paraula: lista){
        if(tolower(paraula[0])==tolower(c)){
            std::cout << paraula << std::endl;
        }
    }

}