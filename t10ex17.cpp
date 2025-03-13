#include <iostream>
#include <string>

int main(){
    int l[]={1,2,3,4,5};

    for(int i=0; i<sizeof(l)/4;i++){
        int position=l[i];
        std::string punts;
        for(int e=0;e<position;e++){
            punts+=".";
        }
        std::cout << punts << std::endl;
    }
    return 0;
}