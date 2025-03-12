#include <iostream>
#include <string>

int main(){
    int n1 = 6;
    int n2 = 8;

    if (n1>n2){
        std::cout << "El número " << n1 << " és major que " << n2 << std::endl;
    } else {
        std::cout << "El número " << n2 << " és major que " << n1 << std::endl;
    }
    return 0;
}