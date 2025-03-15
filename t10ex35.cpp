#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int entrada;
    cout << "Introdueix un número: ";
    cin >> entrada;

    if (entrada < 1 || entrada > 900000){
        return 0;
    }

    int resultat = log10(entrada)+1;

    cout << resultat << endl;;
}