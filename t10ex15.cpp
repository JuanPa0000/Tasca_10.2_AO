#include <iostream>
#include <string>

int main(){
    std::string l1[] = {"Joan","Pere","Juan","Eneko"};
    std::string l2[] = {"David","Aris","Sad","Juan"};
    int l1_length = l1->length();
    int l2_length = l2->length();
    bool resultat = false;

    for(int i=0; i<l1_length; i++){
        for(int e=0; e<l2_length; e++){
            if(l1[i]==l2[e]){
                resultat=true;
                break;
            }
        }
    }

    std::cout << std::boolalpha;
    std::cout << resultat << std::endl;
    return 0;
}