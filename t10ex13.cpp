#include <iostream>
#include <string>

int main(){
    std::string paraula = "Soc del Ramis";
    int paraulaLength = paraula.length();
    std::string resultat = "";
    
    for (int i=paraulaLength; i>=0; i--) {
        resultat+=paraula[i];
    }

    std::cout << resultat << std::endl;

    return 0;
}