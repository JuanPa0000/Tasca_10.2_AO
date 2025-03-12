#include <iostream>
#include <string>

int main(){
    std::string lletra;
    std::cout << "Escriu una lletra: ";
    std::cin >> lletra;

    std::string vocals[] = {"a","e","i","o","u"};
    int vocalsLength = sizeof(vocals) / sizeof(vocals[0]);

    bool resultat = false;

    for (int i=0; i<vocalsLength; i++){
        if (lletra == vocals[i]){
            resultat=true;
        }
    }

    std::cout << std::boolalpha;
    std::cout << resultat << std::endl;
    return 0;
}