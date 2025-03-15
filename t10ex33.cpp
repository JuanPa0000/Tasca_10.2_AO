#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int solicitud;
    while (true) {
        cout << "Introdueix la quantitat a solicitar: ";
        cin >> solicitud;

        if(solicitud>50000 && solicitud < 800000){
            break;
        }
    }

    float interes;
    while (true){
        cout << "Introdueix el interes: ";
        cin >> interes;

        if(interes>0.5 && interes < 13){
            break;
        }
    }

    int anys;
    while (true){
        cout << "Introdueix els anys: ";
        cin >> anys;

        if(anys > 3 && anys < 40){
            break;
        }
    }

    double Cfinal = solicitud * pow((1 + interes/100),anys);
    cout << solicitud << " a " << interes << "'%' de interes a " << anys << " anys, s'ha de convertir en " << Cfinal << endl;

}