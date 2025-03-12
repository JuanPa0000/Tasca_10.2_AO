#include <iostream>
#include <string>
#include <cctype>

int main(){

    //Entrada
    std::string entrada;
    
    std::cout << "Introdueix un palíndrom: ";
    std::cin >> entrada;

    std::string cadena;
    bool resultat = false;

    //Pasar la entrada a minusculas
    for (char c: entrada){
        cadena+= std::tolower(c);
    }

    //Crear una variable con la cadena alreves
    int cadenaLength = cadena.length();
    std::string cadenaReverse;
    for (int i=cadenaLength-1; i>=0; i--){
        cadenaReverse+=cadena[i];
    }

    //Comprobar si son polindromos
    if (cadenaReverse==cadena){
        resultat=true;
    }

    std::cout << std::boolalpha;
    std::cout << resultat << std::endl;
    return 0;
}