#include <iostream>
#include <string>

int main(){
    int lista[3] = {21, 32, 16};
    int major;

    for (int i=0; i<3; i++){
        if (lista[i] > lista[i-1]) {
            major=lista[i];
        }
    }

    std::cout << "El número major és: " << major << std::endl;
}