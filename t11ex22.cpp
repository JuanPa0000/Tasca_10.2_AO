#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string cadena;
    std::cout << "Escriu una paraula: ";
    std::cin >> cadena;
    int majuscules = 0;

    for(char c: cadena){
        if(c == toupper(c)){
            majuscules+=1;
        }
    }

    std::cout << "Majúscules: " << majuscules << std::endl;
    return 0;
}