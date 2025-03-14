#include <iostream>
#include <string>

int main(){
    int tupla[] = {24,21,16,5,18,19};
    int n;

    std::cout << "Inserta un número: ";
    std::cin >> n;

    for (int i=0; i<sizeof(tupla)/sizeof(tupla[0]);i++){
        if (tupla[i]>n){
            std::cout << tupla[i] << std::endl;
        }
    }
}
