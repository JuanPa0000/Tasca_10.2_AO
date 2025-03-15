#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1, n2;
    cout << "Introdueix el primer número: ";
    cin >> n1;

    cout << "Introdueix el segon número: ";
    cin >> n2;

    if((n1+n2)%2==0){
        cout << "Es parell" << endl;
    } else {
        cout << "Es senar" << endl;
    }

    return 0;
}