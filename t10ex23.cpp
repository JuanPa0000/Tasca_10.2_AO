#include <iostream>
#include <string>
#include <cmath>

int main(){
    std::string bin;
    int entero = 0;
    int p = 0;

    std::cout << "Introduce el número en binario: ";
    std::cin >> bin;

    for (int i=bin.length()-1;i>=0;i--){
        int c = bin[p] - '0';
        entero+= c * std::pow(2, i);
        p++;
    }

    std::cout << entero << std::endl;
}