#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int entrada;
    cout << "Introdueix un número menor de 100: ";
    cin >> entrada;
    int resultat;
    entrada = entrada-4;

    while (entrada>0){
        resultat+=pow(entrada,2);
        entrada-=4;
    }

    cout << resultat << endl;
}