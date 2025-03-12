#include <iostream>
#include <string>

int main(){
    int llista[] = {2,5,1,6};
    int llistaLength = sizeof(llista) / sizeof(llista[0]);
    int suma = 0;
    int mult = 1;

    for (int i=0; i<llistaLength; i++){
        suma+=llista[i];
        mult*=llista[i];
    }

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Producte: " << mult << std::endl;

    return 0;
}