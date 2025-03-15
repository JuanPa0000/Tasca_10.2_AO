#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void mastermind(int codiSecret[]){
    bool a = true;
    int intents = 0;

    while(a==true) {
        string codi;
        cout << "Introdueix el codi: ";
        cin >> codi;
        int acertats = 0;
        int posicioCorrecta = 0;

        for(int i=0; i<4; i++){
            int n = codi[i] - '0';
            
            for(int e=0; e<4; e++){
                if(n==codiSecret[e]){
                    if(i==e){
                        posicioCorrecta+=1;
                        acertats+=1;
                    } else {
                        acertats+=1;
                    }
                }
            }
        }

        if(posicioCorrecta==4){
            cout << "Felicitats has guanyat" << endl << "El codi secret era: " << codiSecret;
            a=false;
        } else {
            cout << "Números acertats: " << acertats << endl;
            cout << "Número en la posició correcta: " << posicioCorrecta << endl;
            cout << "Intents: " << intents << endl;
            intents+=1;
        }

        if (intents==10){
            cout << "Has perdut" << endl;
            a=false;
        }
    }
}

void unJugador(){
    srand(time(0));
    int codiSecret[4];

    for(int i=0; i<4; i++){
        codiSecret[i]=rand() % 10;
    }

    mastermind(codiSecret);
}

void dosJugadores(){
    string codiSecretString;
    cout << "Introdueix el codi secret sin que te vean: ";
    cin >> codiSecretString;
    int codiSecret[4];

    for(int i=0; i<4; i++){
        codiSecret[i]=codiSecretString[i] - '0';
    }

    mastermind(codiSecret);
}

int main(){
    bool a=true;
    while (a==true){
        cout << "Elije el modo de juego" << endl;
        cout << "1- Un jugador" << endl << "2- Dos Jugadores" << endl << "Elija: ";
        int o;
        cin >> o;

        switch(o){
            case 1:
                unJugador();
                break;
            case 2:
                dosJugadores();
                break;
            default:
                break;
        }

        string again;
        cout << "Vols tornar a jugar? S/n: ";
        cin >> again;

        string againLower = "";
        for(int i=0; i<again.length(); i++){
            char c = tolower(again[i]);
            againLower+=c;
        }

        if (againLower!="si" || againLower!="s"){
            a=false;
        }
    }

    return 0;
}