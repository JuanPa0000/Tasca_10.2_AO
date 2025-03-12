#include <iostream>
#include <string>

int main(){
    int arr[] = {32, 15 ,63, 12, 2};
    int lengArr = sizeof(arr) / sizeof(arr[0]);
    std::cout << "La longitud de la lista es de: " << lengArr << std::endl;
    return 0;
}