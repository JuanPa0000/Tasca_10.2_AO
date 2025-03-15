#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Introdueix el número: ";
    cin >> n;

    if(n > 20 || n < 1){
        return 0;
    }

    for (int i = 1; i<11; i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }

    return 0;
}