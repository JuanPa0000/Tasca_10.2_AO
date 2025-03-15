#include <iostream>
#include <string>
using namespace std;

int main(){
    string p1;
    string p2;
    cout << "Introdueix la primera paraula: ";
    cin >> p1;
    cout << "Introdueix la segona paraula: ";
    cin >> p2;

    if(p1.substr(p1.length()-3, p1.length())==p2.substr(p2.length()-3, p2.length())){
        cout << "Si rimen" << endl;
    } else if(p1.substr(p1.length()-2, p1.length())==p2.substr(p2.length()-2, p2.length())){
        cout << "Rimen un poc" << endl;
    } else{
        cout << "No rimen" << endl;
    }
    
    return 0;
}