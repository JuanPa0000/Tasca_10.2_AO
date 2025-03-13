#include <iostream>
#include <string>

int main(){
    int l[]={4,2,10,5};
    int major;

    for(int i=0;i<sizeof(l)/4;i++){
        if(l[i]>l[i-1]){
            major=l[i];
        }
    }

    std::cout << major << std::endl;
    return 0;
}