#include <iostream>
#include <string>

int main(){
    int n;
    char c;
    std::string resultat;

    std::cout << "Introdueix un número: ";
    std::cin >> n;

    std::cout << "Introdueix un càracter: ";
    std::cin >> c;

    for (int i=0; i<n; i++){
        resultat+=c;
    }
    std::cout << resultat << std::endl;
    return 0;
}