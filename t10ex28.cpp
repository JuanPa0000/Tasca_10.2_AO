#include <iostream>
#include <string>

int main(){
    std::string paraula;
    std::cout << "Introdueix una paraula: ";
    std::cin >> paraula;

    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;

    for(char c: paraula){
        switch (tolower(c)){
            case 'a':
                a+=1;
                break;
            case 'e':
                e+=1;
                break;
            case 'i':
                i+=1;
                break;
            case 'o':
                i+=1;
                break;
            case 'u':
                i+=1;
                break;
            default:
                break;
            
        }
    }

    std::cout << "Hi Ha " << a << " a's " << e << " e's "
    << i << " i's " << o << " o's " << u << " u's " << std::endl;
}