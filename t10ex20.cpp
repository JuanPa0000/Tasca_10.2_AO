#include <iostream>
#include <string>

int main(){
    std::string l[]={"Hola","Ramis","paraula","IES"};
    int lenLista = sizeof(l)/sizeof(l[0]);
    int posicioParaula;

    for(int i=0;i<lenLista;i++){
        int lenParaula = l[i].length();
        int lenAnterior = l[i-1].length();
        
        if(lenParaula>lenAnterior){
            posicioParaula=i;
        }
    }

    std::cout << l[posicioParaula] << std::endl;
    return 0;
}