#include <iostream>
#include <string>

int main(){
    std::string l[]={"paraula","Joan","Juanpa","IPO","Compartir"};
    int n;

    std::cout << "Inserta un número: ";
    std::cin >> n;

    for(int i=0;i<sizeof(l)/sizeof(l[0]);i++){
        
        if(l[i].length()>n){
            std::cout << l[i] << " " << std::endl;
        }
    }
    return 0;
}    