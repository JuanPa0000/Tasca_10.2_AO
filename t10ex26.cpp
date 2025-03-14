#include <iostream>
#include <string>

int main(){
    std::string list[] = {"Joan","Amanda","Pere","Abdul"};

    for(std::string paraula: list){
        
        if (paraula[0]=='a' || paraula[0]=='A'){
            std::cout << paraula << std::endl;
        }
    }

}