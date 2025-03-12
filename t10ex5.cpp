#include <iostream>
#include <string>

void comprovarEdat(int edat){
    if (edat < 18){
        std::cout << "Ets menor d'edat" << std::endl;
    } else if (edat==18){
        std::cout << "Tens exactament 18 anys" << std::endl;
    } else if (edat > 18) {
        std::cout << "Ets major d'edat" << std::endl;
    } else {
        std::cout << "Entrada incorrecta" << std::endl;
    }
}
int main(){
    int edat;

    std::cout << "Indica la teva edat: ";
    std::cin >> edat;

    comprovarEdat(edat);
    return 0;
}