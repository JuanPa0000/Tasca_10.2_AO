#include <iostream>
#include <string>

int suma(int n1, int n2){
    std::cout << "La suma de los números " << n1 << " i " << n2 << " és: " << n1+n2 << std::endl;
    return n1+n2;
}
int resta(int n1, int n2){
    std::cout << "La resta de los números " << n1 << " i " << n2 << " és: " << n1-n2 << std::endl;
    return n1-n2;
}
int divi(int n1, int n2){
    std::cout << "La divisió de los números " << n1 << " i " << n2 << " és: " << n1/n2 << std::endl;
    return n1/n2;
}
int mult(int n1, int n2){
    std::cout << "El producte de los números " << n1 << " i " << n2 << " és: " << n1*n2 << std::endl;
    return n1*n2;
}

int main(){
    int n1;
    int n2;
    int op;

    // Input de los números
    std::cout << "Inserta el primer numero: ";
    std::cin >> n1;
    
    bool a=true;

    while (a==true) {
        //Input del tipo de operació
        std::cout << "Inserta el segon número: ";
        std::cin >> n2;
        
        std::cout << "1 Suma" << std::endl;
        std::cout << "2 Resta" << std::endl;
        std::cout << "3 Divisió" << std::endl;
        std::cout << "4 Multiplicació" << std::endl;
        std::cout << "5 Sortir" << std::endl;
        std::cout << "Tria una opció: " << std::endl;
        std::cin >> op;

        switch(op){
            case 1:
                n1 = suma(n1,n2);
                break;
            case 2:
                n1=resta(n1,n2);
                break;
            case 3:
                n1=divi(n1,n2);
                break;
            case 4:
                n1=mult(n1,n2);
                break;
            case 5:
                a=false;
                break;
            }
    }
}